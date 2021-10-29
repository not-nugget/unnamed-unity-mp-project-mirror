namespace Nugget.Scripts.Player.Input.Interfaces
{
    public interface IInputProvider
    {
        public InputState GetState(); //This should be a method, as it indicates a proccess needs to occur before the state is returned, whereas a property indicates it is raw data
    }
}
