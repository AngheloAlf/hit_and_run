#ifndef ALLRENDERFLOW_HPP
#define ALLRENDERFLOW_HPP

// text

class RenderFlow {
public:
    static void CreateInstance();
    static RenderFlow *GetInstance(void);
    static void DestroyInstance(void);
    void DoAllRegistration(void);

private:
// void OnTimerDone__10RenderFlowUiPv();
// void __10RenderFlow();
// void _$_10RenderFlow();
// void __tf10RenderFlow();

public:
    virtual void virtual_0C(unsigned int, int);
};

// void func_00216210();

// data

// extern UNK_TYPE _10RenderFlow$spInstance;
// extern UNK_TYPE _10RenderFlow$sDrawStatsOverlay;
// extern UNK_TYPE D_0042E1E9;

// rodata

// extern UNK_TYPE D_00470860;
// extern UNK_TYPE _vt$10RenderFlow;
// extern UNK_TYPE D_00470898;

#endif
