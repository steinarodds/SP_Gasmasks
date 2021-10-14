modded class PlayerBase{
  //Declare a variable of our overlay
  ref Gasmasks            Gasmasks        = new Gasmasks(); 
  ref MyAnimatedOverlay   myAnimatedOverlay = new MyAnimatedOverlay();
  ref SCameraOverlayTimed myTimedOverlay    = new SCameraOverlayTimed(10); //A SCameraOverlayTimed requires you to specify the time (seconds). myTimedOverlay once activated will be animated for 10 seconds and then deactivated

  override void OnJumpStart(){
    super.OnJumpStart();
    //Make sure we apply the overlays only client side 
    if( GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT ){
      //Activating the overlays
      // NOTE: SCameraOverlaysManager is a singleton
      SCameraOverlaysManager.getInstance().activate(Gasmasks);
      SCameraOverlaysManager.getInstance().activate(myAnimatedOverlay);
      SCameraOverlaysManager.getInstance().activate(myTimedOverlay);
    }
  }
}