#ifndef _inputengine_H_
#define _inputengine_H_

//////////////////////////////////////////////////////////////////////////////
//
// type ButtonEvent = (Integer, Boolean)
//
//////////////////////////////////////////////////////////////////////////////

class ButtonEventData : private TPair<int, bool> {
public:
    ButtonEventData(int button, bool bDown) :
        TPair<int, bool>(button, bDown)
    {
    }

    int  GetButton() const { return GetFirst();  }
    bool IsDown()    const { return GetSecond(); }
};

typedef TEvent<ButtonEventData> ButtonEvent;

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class InputStream : public IObject {
public:
    virtual int      GetValueCount()  = 0;
    virtual int      GetButtonCount() = 0;
    virtual Boolean* IsDown(int id)   = 0;
    virtual Number*  GetValue(int id) = 0;

    virtual ButtonEvent::Source* GetEventSource() = 0;
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class MouseInputStream : public InputStream {
public:
    virtual void SetClipRect(const Rect& rect)       = 0;
    virtual void SetPosition(const Point& point)     = 0;
    virtual void SetWheelPosition(float pos)         = 0;
    virtual void SetEnabled(bool bEnabled)           = 0;

    virtual const Point& GetPosition()               = 0;

	// BT DX7 Compatibility
	void SetAccel(int value) {}
	void SetSensitivity(float value) {}
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class JoystickInputStream : public InputStream {
public:
    virtual bool    HasForceFeedback()                            = 0;
    virtual void    CreateEffects()                               = 0;
    virtual void    PlayFFEffect(short effectID, LONG lDirection) = 0;
    virtual ZString GetShortDescription(int index)                = 0;
    virtual ZString GetDescription()                              = 0;
    virtual ZString GetValueDescription(int id)                   = 0;

	// BT DX7 Compatibility
	void SetRanges() {}
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class InputEngine : public IObject {
public:
    virtual void                 EnumerateJoysticks()   = 0;
    virtual void                 Update()               = 0;
    virtual void                 SetFocus(bool bFocus)  = 0;
    virtual int                  GetJoystickCount()     = 0;
    virtual JoystickInputStream* GetJoystick(int index) = 0;
    virtual MouseInputStream*    GetMouse()             = 0;
};

TRef<InputEngine> CreateInputEngine(HWND hwnd);

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

#endif