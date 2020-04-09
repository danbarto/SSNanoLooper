#include "Process_VBSHWW.h"

void Process_VBSHWW()
{
    //==============================================
    // Process_VBSHWW:
    // This function gets called during the event looping.
    // This is where one sets the variables used for the category VBSHWW.
    //==============================================

    // Set variables used in this category.
    // If histograms are booked with these variables the histograms will be filled automatically.
    // Please follow the convention of <category>_<varname> structure.
    // N.B. PLEASE USE float TYPE FOR EVERYTHING, UNLESS IT IS LORENTZVECTOR (which is also done in float).
    ana.tx.setBranch<float>("VBSHWW_intVar1", -999);
    ana.tx.setBranch<float>("VBSHWW_floatVar1", -999);

    // Example of reading from Nano
    // std::vector<LorentzVector> electron_p4s = nt.Electron_p4(); // nt is a global variable that accesses NanoAOD
    // std::vector<float> electron_mvaTTH = nt.Electron_mvaTTH(); // electron ttH MVA scores from NanoAOD
    // Semi-complete list of NanoAOD for 102X can be found here: https://cms-nanoaod-integration.web.cern.ch/integration/master-102X/mc102X_doc.html
    // Also consult here: https://github.com/cmstas/NanoTools/blob/d641a6d6c1aa9ecc8094a1af73d5e1bd7d6502ab/NanoCORE/Nano.h#L4875 (if new variables are added they may show up in master)

    LorentzVector LV_VBSHWW_LVVar1 = RooUtil::Calc::getLV(34.5, 1.2, 3.123, 0.105); // RooUtil::Calc::getLV() creates 4 vector

    ana.tx.setBranch<LorentzVector>("VBSHWW_LVVar1", LV_VBSHWW_LVVar1);
}
