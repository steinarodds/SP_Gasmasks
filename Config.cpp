// more stuff here...
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
     dir = "SP_Gasmasks/sVisual";
    picture = "";
    action = "";
    hideName = 1;
    hidePicture = 1;
    name = "SP_Gasmasks";
    credits = "simonvic";
    author = "simonvic,Stoney edit";
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
        files[] = {
          "SP_Gasmasks/scripts/3_Game"
        };
      };
      class worldScriptModule {
        value = "";
        files[] = {
          "SP_Gasmasks/scripts/4_World"
        };
      };
      
      class missionScriptModule {
        value = "";
        files[] = {
          "SP_Gasmasks/scripts/5_Mission"
        };
      };  
    };
  };
};


class CfgVehicles{
  class GasmaskA // Or should this be as ScameraOverlay
  {
    image="";                                 // Resource image path, can be whatever an ImageWidget accepts texture
    alpha=1.0;                                // [0.0 - 1.0] Alpha value (transparency)
    mask="";                                  // Resource image path, can be whatever an ImageWidget accepts as mask
    maskProgress=1.0;                         // [0.0 - 1.0] Mask progress
    maskTransitionWidth=1.0;                  // Mask transition width (used as progress + transitionWidth)
    position[] = {0.0, 0.0};                  // [0.0 - 1.0] X and Y position in screenspace
    size[] = {1.0, 1.0};                      // [0.0 - 1.0] X and Y size in screenspace
    rotation[] = {0.0, 0.0, 0.0};             // Yaw, Pitch and Roll defined in degrees
    priority = 0;                             // Higher priority means closer to the camera (also known as z-depth)
    targetCameras[] = {"DayZPlayerCamera"};   // Camera typename on which the overlay will be visible
    hidesWithIngameHUD = 0;                   // [0 = false, 1 = true] Determines if it must hides when the player hides the ingame HUD
  };
  class SCameraOverlay_Headgear : SCameraOverlay {
    priority = 1;
    targetCameras[] = {"DayZPlayerCamera1stPerson", "DayZPlayerCameraIronsights"};
  };
  class GP5GasMask {
    class sUDE {
      class CameraOverlays {
        class overlay_0 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/motohelmet_pristine.edds";
        };

        class overlay_1 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/GasmaskA_pristine.edds";
        };

        class overlay_2 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/GasmaskA_pristine.edds";
        };
        
        class overlay_3 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/GasmaskA_pristine.edds";
        };

        class overlay_4 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/GasmaskA_pristine.edds";
        };
      };
    };
  };
};  

  class DarkMotoHelmet_ColorBase {
    class sUDE {
      class CameraOverlays {
        class overlay_0 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/GasmaskB_pristine.edds";
        };

        class overlay_1 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/overlays/GasmaskB_worn.edds";
        };

        class overlay_2 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/overlays/GasmaskB_damaged.edds";
        };
        
        class overlay_3 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/overlays/GasmaskB_badlydamaged.edds";
        };

        class overlay_4 : SCameraOverlay_Headgear {
          image="SP_Gasmasks/GUI/textures/overlays/GasmaskB_ruined.edds";
        };
      };
    };
  };