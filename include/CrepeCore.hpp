#ifndef _CREPECORE_HPP
#define _CREPECORE_HPP

class Time
{
    public:
        int deltaTime = 1;
        void TimeCollectStart();
        void TimeCollectEnd();
    private:
        int TimeCollectBuffer;
};
class Application
{
    public:
        void Quit();
        bool GetState();
    private:
        bool AppState = true;
};
class CrepeScript
{
    public:
        virtual void Start();
        virtual void Update();

        Time* Time;
        Application* Application;
};
#endif