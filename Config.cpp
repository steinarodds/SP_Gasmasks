class CfgPatches {
	class Gasmasks{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sVisual",
		};
	};
}; 


class CfgMods {
	class SP_Gasmasks {
		dir = "SP_Gasmasks";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "SP_Gasmasks";
		credits = "Simonvic";
		author = "Simonvic,Stoney edit";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {
			"Game",
			"World",
			"Mission"
		};
		class defs {
			class gameScriptModule {
				value = "";
				files[] = { "SP_Gasmasks/scripts/3_Game" };
			};

			class worldScriptModule {
				value = "";
				files[] = { "SP_Gasmasks/scripts/4_World" };
			};

			class missionScriptModule {
				value = "";
				files[] = { "SP_Gasmasks/scripts/5_Mission" };
			};
		};
	};
};

class CfgVehicles{
	class SCameraOverlay;
	class SCameraOverlay_Headgear : SCameraOverlay{};  
	class FS_GasMask_FV {
		class sUDE {
			class CameraOverlays {
				class overlay_0 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/GasmaskA_pristine.edds";
				};

				class overlay_1 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/GasmaskA_worn.edds";
				};

				class overlay_2 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/GasmaskA_damaged.edds";
				};

				class overlay_3 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/GasmaskA_badlydamaged.edds";
				};

				class overlay_4 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/GasmaskA_ruined.edds";
				};
			};
		};
	};

	class FS_TOX_HeadGear_ColorBase {
		class sUDE {
			class CameraOverlays {
				class overlay_0 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/GasmaskB_pristine.edds";
				};

				class overlay_1 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/overlays/GasmaskB_worn.edds";
				};

				class overlay_2 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/overlays/GasmaskB_damaged.edds";
				};

				class overlay_3 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/overlays/GasmaskB_badlydamaged.edds";
				};

				class overlay_4 : SCameraOverlay_Headgear {
					image="SP_Gasmasks/Scripts/GUI/textures/overlays/GasmaskB_ruined.edds";
				};
			};
		};
	};
};