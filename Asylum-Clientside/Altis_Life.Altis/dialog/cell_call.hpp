class Life_cell_phone_call {
	idd = 5000;
	name= "life_cell_phone_call";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_cell_call";
	
	class controlsBackground {
		
		class MainBackground:Life_RscPictureKeepAspect {
			idc = -1;
			text = "images\phone.paa";			
			colorBackground[] = {0, 0, 0, 0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		
	};
	
	class controls {

		class TextTime : Life_RscStructuredText
		{
			idc = 90035;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.75};
			x = 0; y = 0.165;
			w = 1; h = 0.05;
		};
		
		class TextStatusLeft : Life_RscStructuredText
		{
			idc = 90036;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.75};
			x = 0.5 - (0.08 * 2) - 0.005; y = 0.165;
			w = 0.3; h = 0.05;
		};
		
		class TextStatusRight : Life_RscStructuredText
		{
			idc = 90037;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.75};
			x = 0.34; y = 0.165;
			w = 1 - (0.34 * 2) - 0.02; h = 0.05;
			class Attributes {
				align = "right";
			};
		};
		
		class TextTitle : Life_RscStructuredText {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Phone Status";
			x = 0.5 - (0.08 * 2);
			y = 0.23;
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			h = (1 / 25);
			class Attributes {
				align = "center";
			};
		};
		
		class TextStatus : Life_RscStructuredText {
			colorBackground[] = {0, 0, 0, 0};
			idc = 5003;
			text = "Idle";
			x = 0.5 - (0.08 * 2);
			y = 0.28;
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			h = (1 / 25);
			class Attributes {
				align = "center";
			};
		};
		
		class CallButton : life_RscButtonMenu 
		{
			idc = 5015;
			text = "Call";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "[true,objNull] call life_fnc_phoneCall";
			
			x = 1 - 0.34 - 0.075;
			y = 0.35;
			w = 0.075;
			h = (1 / 25);
		};
		
		class PlayerList : Life_RscCombo 
		{
			idc = 5004;
			x = 0.34; y = 0.35;
			w = 1 - ((0.5 - (0.08 * 2)) * 2) - 0.08; h = (1 / 25);
		};
		
		class HangUpButton : life_RscButtonMenu 
		{
			idc = 5016;
			text = "Hang Up";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "[] call life_fnc_phoneEnd";
			
			x = 0.5 - (0.08 * 2);
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			y = 0.4;
			h = (1 / 25);
		};
		
		class ButtonClose : Life_RscButtonInvisible {
			idc = -1;
			shortcuts[] = {0x00050000 + 2};
			text = "";
			onButtonClick = "closeDialog 0;";
			tooltip = "Go back to home screen";
			x = 0.5 - ((6.25 / 40) / 2);
			y = 1 - 0.15;
			w = (6.25 / 40);
			h = (6.25 / 40);
		};
	};
};