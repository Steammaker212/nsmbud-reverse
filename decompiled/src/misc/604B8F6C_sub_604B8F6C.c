/* sub_604B8F6C
 * address: 0x604B8F6C   size: 4404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_604B8F6C()
{
  _DWORD v1[2]; // [sp+14h] [bp-5A4h] BYREF
  _DWORD v2[2]; // [sp+1Ch] [bp-59Ch] BYREF
  _DWORD v3[2]; // [sp+24h] [bp-594h] BYREF
  _DWORD v4[2]; // [sp+2Ch] [bp-58Ch] BYREF
  _DWORD v5[2]; // [sp+34h] [bp-584h] BYREF
  _DWORD v6[2]; // [sp+3Ch] [bp-57Ch] BYREF
  _DWORD v7[2]; // [sp+44h] [bp-574h] BYREF
  _DWORD v8[2]; // [sp+4Ch] [bp-56Ch] BYREF
  _DWORD v9[2]; // [sp+54h] [bp-564h] BYREF
  _DWORD v10[2]; // [sp+5Ch] [bp-55Ch] BYREF
  _DWORD v11[2]; // [sp+64h] [bp-554h] BYREF
  _DWORD v12[2]; // [sp+6Ch] [bp-54Ch] BYREF
  _DWORD v13[2]; // [sp+74h] [bp-544h] BYREF
  _DWORD v14[2]; // [sp+7Ch] [bp-53Ch] BYREF
  _DWORD v15[2]; // [sp+84h] [bp-534h] BYREF
  _DWORD v16[2]; // [sp+8Ch] [bp-52Ch] BYREF
  _DWORD v17[2]; // [sp+94h] [bp-524h] BYREF
  _DWORD v18[2]; // [sp+9Ch] [bp-51Ch] BYREF
  _DWORD v19[2]; // [sp+A4h] [bp-514h] BYREF
  _DWORD v20[2]; // [sp+ACh] [bp-50Ch] BYREF
  _DWORD v21[2]; // [sp+B4h] [bp-504h] BYREF
  _DWORD v22[2]; // [sp+BCh] [bp-4FCh] BYREF
  _DWORD v23[2]; // [sp+C4h] [bp-4F4h] BYREF
  _DWORD v24[2]; // [sp+CCh] [bp-4ECh] BYREF
  _DWORD v25[2]; // [sp+D4h] [bp-4E4h] BYREF
  _DWORD v26[2]; // [sp+DCh] [bp-4DCh] BYREF
  _DWORD v27[2]; // [sp+E4h] [bp-4D4h] BYREF
  _DWORD v28[2]; // [sp+ECh] [bp-4CCh] BYREF
  _DWORD v29[2]; // [sp+F4h] [bp-4C4h] BYREF
  _DWORD v30[2]; // [sp+FCh] [bp-4BCh] BYREF
  _DWORD v31[2]; // [sp+104h] [bp-4B4h] BYREF
  _DWORD v32[2]; // [sp+10Ch] [bp-4ACh] BYREF
  _DWORD v33[2]; // [sp+114h] [bp-4A4h] BYREF
  _DWORD v34[2]; // [sp+11Ch] [bp-49Ch] BYREF
  _DWORD v35[2]; // [sp+124h] [bp-494h] BYREF
  _DWORD v36[2]; // [sp+12Ch] [bp-48Ch] BYREF
  _DWORD v37[2]; // [sp+134h] [bp-484h] BYREF
  _DWORD v38[2]; // [sp+13Ch] [bp-47Ch] BYREF
  _DWORD v39[2]; // [sp+144h] [bp-474h] BYREF
  _DWORD v40[2]; // [sp+14Ch] [bp-46Ch] BYREF
  _DWORD v41[2]; // [sp+154h] [bp-464h] BYREF
  _DWORD v42[2]; // [sp+15Ch] [bp-45Ch] BYREF
  _DWORD v43[2]; // [sp+164h] [bp-454h] BYREF
  _DWORD v44[2]; // [sp+16Ch] [bp-44Ch] BYREF
  _DWORD v45[2]; // [sp+174h] [bp-444h] BYREF
  _DWORD v46[2]; // [sp+17Ch] [bp-43Ch] BYREF
  _DWORD v47[2]; // [sp+184h] [bp-434h] BYREF
  _DWORD v48[2]; // [sp+18Ch] [bp-42Ch] BYREF
  _DWORD v49[2]; // [sp+194h] [bp-424h] BYREF
  _DWORD v50[2]; // [sp+19Ch] [bp-41Ch] BYREF
  _DWORD v51[2]; // [sp+1A4h] [bp-414h] BYREF
  _DWORD v52[2]; // [sp+1ACh] [bp-40Ch] BYREF
  _DWORD v53[2]; // [sp+1B4h] [bp-404h] BYREF
  _DWORD v54[2]; // [sp+1BCh] [bp-3FCh] BYREF
  _DWORD v55[2]; // [sp+1C4h] [bp-3F4h] BYREF
  _DWORD v56[2]; // [sp+1CCh] [bp-3ECh] BYREF
  _DWORD v57[2]; // [sp+1D4h] [bp-3E4h] BYREF
  _DWORD v58[2]; // [sp+1DCh] [bp-3DCh] BYREF
  _DWORD v59[2]; // [sp+1E4h] [bp-3D4h] BYREF
  _DWORD v60[2]; // [sp+1ECh] [bp-3CCh] BYREF
  _DWORD v61[2]; // [sp+1F4h] [bp-3C4h] BYREF
  _DWORD v62[2]; // [sp+1FCh] [bp-3BCh] BYREF
  _DWORD v63[2]; // [sp+204h] [bp-3B4h] BYREF
  _DWORD v64[2]; // [sp+20Ch] [bp-3ACh] BYREF
  _DWORD v65[2]; // [sp+214h] [bp-3A4h] BYREF
  _DWORD v66[2]; // [sp+21Ch] [bp-39Ch] BYREF
  _DWORD v67[2]; // [sp+224h] [bp-394h] BYREF
  _DWORD v68[2]; // [sp+22Ch] [bp-38Ch] BYREF
  _DWORD v69[2]; // [sp+234h] [bp-384h] BYREF
  _DWORD v70[2]; // [sp+23Ch] [bp-37Ch] BYREF
  _DWORD v71[2]; // [sp+244h] [bp-374h] BYREF
  _DWORD v72[2]; // [sp+24Ch] [bp-36Ch] BYREF
  _DWORD v73[2]; // [sp+254h] [bp-364h] BYREF
  _DWORD v74[2]; // [sp+25Ch] [bp-35Ch] BYREF
  _DWORD v75[2]; // [sp+264h] [bp-354h] BYREF
  _DWORD v76[2]; // [sp+26Ch] [bp-34Ch] BYREF
  _DWORD v77[2]; // [sp+274h] [bp-344h] BYREF
  _DWORD v78[2]; // [sp+27Ch] [bp-33Ch] BYREF
  _DWORD v79[2]; // [sp+284h] [bp-334h] BYREF
  _DWORD v80[2]; // [sp+28Ch] [bp-32Ch] BYREF
  _DWORD v81[2]; // [sp+294h] [bp-324h] BYREF
  _DWORD v82[2]; // [sp+29Ch] [bp-31Ch] BYREF
  _DWORD v83[2]; // [sp+2A4h] [bp-314h] BYREF
  _DWORD v84[2]; // [sp+2ACh] [bp-30Ch] BYREF
  _DWORD v85[2]; // [sp+2B4h] [bp-304h] BYREF
  _DWORD v86[2]; // [sp+2BCh] [bp-2FCh] BYREF
  _DWORD v87[2]; // [sp+2C4h] [bp-2F4h] BYREF
  _DWORD v88[2]; // [sp+2CCh] [bp-2ECh] BYREF
  _DWORD v89[2]; // [sp+2D4h] [bp-2E4h] BYREF
  _DWORD v90[2]; // [sp+2DCh] [bp-2DCh] BYREF
  _DWORD v91[2]; // [sp+2E4h] [bp-2D4h] BYREF
  _DWORD v92[2]; // [sp+2ECh] [bp-2CCh] BYREF
  _DWORD v93[2]; // [sp+2F4h] [bp-2C4h] BYREF
  _DWORD v94[2]; // [sp+2FCh] [bp-2BCh] BYREF
  _DWORD v95[2]; // [sp+304h] [bp-2B4h] BYREF
  _DWORD v96[2]; // [sp+30Ch] [bp-2ACh] BYREF
  _DWORD v97[2]; // [sp+314h] [bp-2A4h] BYREF
  _DWORD v98[2]; // [sp+31Ch] [bp-29Ch] BYREF
  _DWORD v99[2]; // [sp+324h] [bp-294h] BYREF
  _DWORD v100[2]; // [sp+32Ch] [bp-28Ch] BYREF
  _DWORD v101[2]; // [sp+334h] [bp-284h] BYREF
  _DWORD v102[2]; // [sp+33Ch] [bp-27Ch] BYREF
  _DWORD v103[2]; // [sp+344h] [bp-274h] BYREF
  _DWORD v104[2]; // [sp+34Ch] [bp-26Ch] BYREF
  _DWORD v105[2]; // [sp+354h] [bp-264h] BYREF
  _DWORD v106[2]; // [sp+35Ch] [bp-25Ch] BYREF
  _DWORD v107[2]; // [sp+364h] [bp-254h] BYREF
  _DWORD v108[2]; // [sp+36Ch] [bp-24Ch] BYREF
  _DWORD v109[2]; // [sp+374h] [bp-244h] BYREF
  _DWORD v110[2]; // [sp+37Ch] [bp-23Ch] BYREF
  _DWORD v111[2]; // [sp+384h] [bp-234h] BYREF
  _DWORD v112[2]; // [sp+38Ch] [bp-22Ch] BYREF
  _DWORD v113[2]; // [sp+394h] [bp-224h] BYREF
  _DWORD v114[2]; // [sp+39Ch] [bp-21Ch] BYREF
  _DWORD v115[2]; // [sp+3A4h] [bp-214h] BYREF
  _DWORD v116[2]; // [sp+3ACh] [bp-20Ch] BYREF
  _DWORD v117[2]; // [sp+3B4h] [bp-204h] BYREF
  _DWORD v118[2]; // [sp+3BCh] [bp-1FCh] BYREF
  _DWORD v119[2]; // [sp+3C4h] [bp-1F4h] BYREF
  _DWORD v120[2]; // [sp+3CCh] [bp-1ECh] BYREF
  _DWORD v121[2]; // [sp+3D4h] [bp-1E4h] BYREF
  _DWORD v122[2]; // [sp+3DCh] [bp-1DCh] BYREF
  _DWORD v123[2]; // [sp+3E4h] [bp-1D4h] BYREF
  _DWORD v124[2]; // [sp+3ECh] [bp-1CCh] BYREF
  _DWORD v125[2]; // [sp+3F4h] [bp-1C4h] BYREF
  _DWORD v126[2]; // [sp+3FCh] [bp-1BCh] BYREF
  _DWORD v127[2]; // [sp+404h] [bp-1B4h] BYREF
  _DWORD v128[2]; // [sp+40Ch] [bp-1ACh] BYREF
  _DWORD v129[2]; // [sp+414h] [bp-1A4h] BYREF
  _DWORD v130[2]; // [sp+41Ch] [bp-19Ch] BYREF
  _DWORD v131[2]; // [sp+424h] [bp-194h] BYREF
  _DWORD v132[2]; // [sp+42Ch] [bp-18Ch] BYREF
  _DWORD v133[2]; // [sp+434h] [bp-184h] BYREF
  _DWORD v134[2]; // [sp+43Ch] [bp-17Ch] BYREF
  _DWORD v135[2]; // [sp+444h] [bp-174h] BYREF
  _DWORD v136[2]; // [sp+44Ch] [bp-16Ch] BYREF
  _DWORD v137[2]; // [sp+454h] [bp-164h] BYREF
  _DWORD v138[2]; // [sp+45Ch] [bp-15Ch] BYREF
  _DWORD v139[2]; // [sp+464h] [bp-154h] BYREF
  _DWORD v140[2]; // [sp+46Ch] [bp-14Ch] BYREF
  _DWORD v141[2]; // [sp+474h] [bp-144h] BYREF
  _DWORD v142[2]; // [sp+47Ch] [bp-13Ch] BYREF
  _DWORD v143[2]; // [sp+484h] [bp-134h] BYREF
  _DWORD v144[2]; // [sp+48Ch] [bp-12Ch] BYREF
  _DWORD v145[2]; // [sp+494h] [bp-124h] BYREF
  _DWORD v146[2]; // [sp+49Ch] [bp-11Ch] BYREF
  _DWORD v147[2]; // [sp+4A4h] [bp-114h] BYREF
  _DWORD v148[2]; // [sp+4ACh] [bp-10Ch] BYREF
  _DWORD v149[2]; // [sp+4B4h] [bp-104h] BYREF
  _DWORD v150[2]; // [sp+4BCh] [bp-FCh] BYREF
  _DWORD v151[2]; // [sp+4C4h] [bp-F4h] BYREF
  _DWORD v152[2]; // [sp+4CCh] [bp-ECh] BYREF
  _DWORD v153[2]; // [sp+4D4h] [bp-E4h] BYREF
  _DWORD v154[2]; // [sp+4DCh] [bp-DCh] BYREF
  _DWORD v155[2]; // [sp+4E4h] [bp-D4h] BYREF
  _DWORD v156[2]; // [sp+4ECh] [bp-CCh] BYREF
  _DWORD v157[2]; // [sp+4F4h] [bp-C4h] BYREF
  _DWORD v158[2]; // [sp+4FCh] [bp-BCh] BYREF
  _DWORD v159[2]; // [sp+504h] [bp-B4h] BYREF
  _DWORD v160[2]; // [sp+50Ch] [bp-ACh] BYREF
  _DWORD v161[2]; // [sp+514h] [bp-A4h] BYREF
  _DWORD v162[2]; // [sp+51Ch] [bp-9Ch] BYREF
  _DWORD v163[2]; // [sp+524h] [bp-94h] BYREF
  _DWORD v164[2]; // [sp+52Ch] [bp-8Ch] BYREF
  _DWORD v165[2]; // [sp+534h] [bp-84h] BYREF
  _DWORD v166[2]; // [sp+53Ch] [bp-7Ch] BYREF
  _DWORD v167[2]; // [sp+544h] [bp-74h] BYREF
  _DWORD v168[2]; // [sp+54Ch] [bp-6Ch] BYREF
  _DWORD v169[2]; // [sp+554h] [bp-64h] BYREF
  _DWORD v170[2]; // [sp+55Ch] [bp-5Ch] BYREF
  _DWORD v171[2]; // [sp+564h] [bp-54h] BYREF
  _DWORD v172[2]; // [sp+56Ch] [bp-4Ch] BYREF
  _DWORD v173[2]; // [sp+574h] [bp-44h] BYREF
  _DWORD v174[2]; // [sp+57Ch] [bp-3Ch] BYREF
  _DWORD v175[2]; // [sp+584h] [bp-34h] BYREF
  _DWORD v176[11]; // [sp+58Ch] [bp-2Ch] BYREF

  dword_60CA2464 = 0;
  dword_60CA2468 = 0;
  dword_60CA246C = 0;
  dword_60CA2444 = (int)&sead__SafeStringBase__vtable;
  v176[0] = &sead__SafeStringBase__vtable;
  v175[0] = &sead__SafeStringBase__vtable;
  v174[0] = &sead__SafeStringBase__vtable;
  v173[0] = &sead__SafeStringBase__vtable;
  dword_60CA2448 = (int)"CmnWindow";
  dword_60CA244C = (int)&sead__SafeStringBase__vtable;
  dword_60CA2450 = (int)"bflyt";
  v176[1] = "CmnWindow_WinText_Title_00";
  v175[1] = &byte_60ABC94D;
  v174[1] = "CmnWindow_BtnL_Cancel_00";
  v173[1] = "CmnWindow_BtnR_Title_00";
  sub_604BA214(dword_60CA1E08, 1, v176, v175, v174, v173);
  v172[0] = &sead__SafeStringBase__vtable;
  v171[0] = &sead__SafeStringBase__vtable;
  v170[0] = &sead__SafeStringBase__vtable;
  v171[1] = &byte_60ABC94D;
  v170[1] = "CmnWindow_BtnL_Cancel_00";
  v169[0] = &sead__SafeStringBase__vtable;
  v172[1] = "CmnWindow_WinText_Pause_00";
  v169[1] = "CmnWindow_BtnR_OK_00";
  sub_604BA214(&dword_60CA1E08[9], 1, v172, v171, v170, v169);
  v168[0] = &sead__SafeStringBase__vtable;
  v165[0] = &sead__SafeStringBase__vtable;
  v167[0] = &sead__SafeStringBase__vtable;
  v166[0] = &sead__SafeStringBase__vtable;
  v167[1] = &byte_60ABC94D;
  v166[1] = "CmnWindow_BtnL_Cancel_00";
  v168[1] = "CmnWindow_WinText_ReturnPlayerNum_00";
  v165[1] = "CmnWindow_BtnR_Change_00";
  sub_604BA214(&dword_60CA1E08[18], 1, v168, v167, v166, v165);
  v164[0] = &sead__SafeStringBase__vtable;
  v161[0] = &sead__SafeStringBase__vtable;
  v163[0] = &sead__SafeStringBase__vtable;
  v162[0] = &sead__SafeStringBase__vtable;
  v163[1] = &byte_60ABC94D;
  v162[1] = "CmnWindow_BtnL_Cancel_00";
  v164[1] = "CmnWindow_WinText_QuickSave_00";
  v161[1] = "CmnWindow_BtnR_QuickSave_00";
  sub_604BA214(&dword_60CA1E08[27], 1, v164, v163, v162, v161);
  v160[0] = &sead__SafeStringBase__vtable;
  v159[0] = &sead__SafeStringBase__vtable;
  v158[0] = &sead__SafeStringBase__vtable;
  v157[0] = &sead__SafeStringBase__vtable;
  v158[1] = &byte_60ABC94D;
  v157[1] = &byte_60ABC94D;
  v160[1] = "CmnWindow_WinText_QuickSave_01";
  v159[1] = "CmnWindow_BtnC_OK_00";
  sub_604BA214(&dword_60CA1E08[36], 0, v160, v159, v158, v157);
  v156[0] = &sead__SafeStringBase__vtable;
  v155[0] = &sead__SafeStringBase__vtable;
  v154[0] = &sead__SafeStringBase__vtable;
  v153[0] = &sead__SafeStringBase__vtable;
  v155[1] = &byte_60ABC94D;
  v154[1] = "CmnWindow_BtnL_Cancel_00";
  v153[1] = "CmnWindow_BtnR_OK_00";
  v156[1] = "CoinEditMenu_Reset_confirm";
  sub_604BA214(&dword_60CA1E08[45], 1, v156, v155, v154, v153);
  v152[0] = &sead__SafeStringBase__vtable;
  v151[0] = &sead__SafeStringBase__vtable;
  v150[0] = &sead__SafeStringBase__vtable;
  v149[0] = &sead__SafeStringBase__vtable;
  v151[1] = &byte_60ABC94D;
  v150[1] = "CmnWindow_BtnL_Cancel_00";
  v149[1] = "CmnWindow_BtnR_OK_00";
  v152[1] = "CmnWindow_WinText_Save_00";
  sub_604BA214(&dword_60CA1E08[54], 2, v152, v151, v150, v149);
  v148[0] = &sead__SafeStringBase__vtable;
  v146[0] = &sead__SafeStringBase__vtable;
  v148[1] = "CmnWindow_WinText_Save_01";
  v146[1] = &byte_60ABC94D;
  v147[0] = &sead__SafeStringBase__vtable;
  v147[1] = "CmnWindow_BtnC_OK_00";
  v145[0] = &sead__SafeStringBase__vtable;
  v145[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[63], 0, v148, v147, v146, v145);
  v144[0] = &sead__SafeStringBase__vtable;
  v143[0] = &sead__SafeStringBase__vtable;
  v142[0] = &sead__SafeStringBase__vtable;
  v141[0] = &sead__SafeStringBase__vtable;
  v143[1] = &byte_60ABC94D;
  v142[1] = "CmnWindow_BtnL_Cancel_00";
  v141[1] = "CmnWindow_BtnR_OK_00";
  v144[1] = "CmnWindow_WinText_ChallengeExit_00";
  sub_604BA214(&dword_60CA1E08[72], 1, v144, v143, v142, v141);
  v140[0] = &sead__SafeStringBase__vtable;
  v139[0] = &sead__SafeStringBase__vtable;
  v138[0] = &sead__SafeStringBase__vtable;
  v137[0] = &sead__SafeStringBase__vtable;
  v139[1] = &byte_60ABC94D;
  v138[1] = "CmnWindow_BtnL_Cancel_00";
  v137[1] = "CmnWindow_BtnR_OK_00";
  v140[1] = "CmnWindow_WinText_ChallengeRetry_00";
  sub_604BA214(&dword_60CA1E08[81], 1, v140, v139, v138, v137);
  v136[0] = &sead__SafeStringBase__vtable;
  v135[0] = &sead__SafeStringBase__vtable;
  v134[0] = &sead__SafeStringBase__vtable;
  v133[0] = &sead__SafeStringBase__vtable;
  v135[1] = &byte_60ABC94D;
  v134[1] = "CmnWindow_BtnL_Cancel_00";
  v133[1] = "CmnWindow_BtnR_OK_00";
  v136[1] = "CoinEditMenu_Save_confirm_00";
  sub_604BA214(&dword_60CA1E08[90], 1, v136, v135, v134, v133);
  v132[0] = &sead__SafeStringBase__vtable;
  v130[0] = &sead__SafeStringBase__vtable;
  v129[0] = &sead__SafeStringBase__vtable;
  v131[0] = &sead__SafeStringBase__vtable;
  v131[1] = &byte_60ABC94D;
  v132[1] = "CmnWindow_WinText_EditSave_00";
  v130[1] = "CmnWindow_BtnL_EditSave_00";
  v129[1] = "CmnWindow_BtnR_EditSave_00";
  sub_604BA214(&dword_60CA1E08[99], 1, v132, v131, v130, v129);
  v128[0] = &sead__SafeStringBase__vtable;
  v127[0] = &sead__SafeStringBase__vtable;
  v127[1] = &byte_60ABC94D;
  v125[0] = &sead__SafeStringBase__vtable;
  v128[1] = "CoinEditMenu_End_confirm_00";
  v125[1] = "CmnWindow_BtnR_OK_00";
  v126[0] = &sead__SafeStringBase__vtable;
  v126[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[108], 1, v128, v127, v126, v125);
  v124[0] = &sead__SafeStringBase__vtable;
  v123[0] = &sead__SafeStringBase__vtable;
  v122[0] = &sead__SafeStringBase__vtable;
  v121[0] = &sead__SafeStringBase__vtable;
  v123[1] = &byte_60ABC94D;
  v122[1] = "CmnWindow_BtnL_Cancel_00";
  v121[1] = "CmnWindow_BtnR_Title_00";
  v124[1] = "CmnWindow_WinText_ChallengeTitle_00";
  sub_604BA214(&dword_60CA1E08[117], 1, v124, v123, v122, v121);
  v120[0] = &sead__SafeStringBase__vtable;
  v119[0] = &sead__SafeStringBase__vtable;
  v118[0] = &sead__SafeStringBase__vtable;
  v117[0] = &sead__SafeStringBase__vtable;
  v119[1] = &byte_60ABC94D;
  v118[1] = "CmnWindow_BtnL_Cancel_00";
  v117[1] = "CmnWindow_BtnR_Title_00";
  v120[1] = "CmnWindow_WinText_VSTitle_00";
  sub_604BA214(&dword_60CA1E08[126], 1, v120, v119, v118, v117);
  v116[0] = &sead__SafeStringBase__vtable;
  v115[0] = &sead__SafeStringBase__vtable;
  v115[1] = &byte_60ABC94D;
  v113[0] = &sead__SafeStringBase__vtable;
  v116[1] = "CmnWindow_WinText_SCoinMovie_00";
  v113[1] = "CmnWindow_BtnR_OK_00";
  v114[0] = &sead__SafeStringBase__vtable;
  v114[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[135], 1, v116, v115, v114, v113);
  v112[0] = &sead__SafeStringBase__vtable;
  v111[0] = &sead__SafeStringBase__vtable;
  v111[1] = &byte_60ABC94D;
  v109[0] = &sead__SafeStringBase__vtable;
  v112[1] = "CmnWindow_WinText_FreeExit_00";
  v109[1] = "CmnWindow_BtnR_OK_00";
  v110[0] = &sead__SafeStringBase__vtable;
  v110[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[144], 1, v112, v111, v110, v109);
  v108[0] = &sead__SafeStringBase__vtable;
  v107[0] = &sead__SafeStringBase__vtable;
  v106[0] = &sead__SafeStringBase__vtable;
  v105[0] = &sead__SafeStringBase__vtable;
  v107[1] = &byte_60ABC94D;
  v106[1] = "CmnWindow_BtnL_Cancel_00";
  v105[1] = "CmnWindow_BtnR_Title_00";
  v108[1] = "CmnWindow_WinText_FreeTitle_00";
  sub_604BA214(&dword_60CA1E08[153], 1, v108, v107, v106, v105);
  v104[0] = &sead__SafeStringBase__vtable;
  v103[0] = &sead__SafeStringBase__vtable;
  v103[1] = &byte_60ABC94D;
  v101[0] = &sead__SafeStringBase__vtable;
  v104[1] = "CmnWindow_WinText_VSExit_00";
  v101[1] = "CmnWindow_BtnR_OK_00";
  v102[0] = &sead__SafeStringBase__vtable;
  v102[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[162], 1, v104, v103, v102, v101);
  v100[0] = &sead__SafeStringBase__vtable;
  v99[0] = &sead__SafeStringBase__vtable;
  v99[1] = &byte_60ABC94D;
  v97[0] = &sead__SafeStringBase__vtable;
  v100[1] = "CmnWindow_WinText_ChallengeExit_00";
  v97[1] = "CmnWindow_BtnR_OK_00";
  v98[0] = &sead__SafeStringBase__vtable;
  v98[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[171], 1, v100, v99, v98, v97);
  v96[0] = &sead__SafeStringBase__vtable;
  v95[0] = &sead__SafeStringBase__vtable;
  v94[0] = &sead__SafeStringBase__vtable;
  v93[0] = &sead__SafeStringBase__vtable;
  v94[1] = &byte_60ABC94D;
  v93[1] = &byte_60ABC94D;
  v95[1] = "CmnWindow_BtnC_OK_00";
  v96[1] = "CmnWindow_WinText_InitialSave_01";
  sub_604BA214(&dword_60CA1E08[180], 0, v96, v95, v94, v93);
  v92[0] = &sead__SafeStringBase__vtable;
  v90[0] = &sead__SafeStringBase__vtable;
  v92[1] = "CmnWindow_WinText_InitialSave_02";
  v90[1] = &byte_60ABC94D;
  v91[0] = &sead__SafeStringBase__vtable;
  v91[1] = "CmnWindow_BtnC_OK_00";
  v89[0] = &sead__SafeStringBase__vtable;
  v89[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[189], 0, v92, v91, v90, v89);
  v88[0] = &sead__SafeStringBase__vtable;
  v86[0] = &sead__SafeStringBase__vtable;
  v88[1] = "CmnWindow_WinText_Boss_00";
  v86[1] = &byte_60ABC94D;
  v87[0] = &sead__SafeStringBase__vtable;
  v87[1] = "CmnWindow_BtnC_OK_00";
  v85[0] = &sead__SafeStringBase__vtable;
  v85[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[198], 0, v88, v87, v86, v85);
  v84[0] = &sead__SafeStringBase__vtable;
  v83[0] = &sead__SafeStringBase__vtable;
  v83[1] = &byte_60ABC94D;
  v81[0] = &sead__SafeStringBase__vtable;
  v84[1] = "CmnWindow_WinText_Boss_01";
  v81[1] = "CmnWindow_BtnR_OK_00";
  v82[0] = &sead__SafeStringBase__vtable;
  v82[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[207], 1, v84, v83, v82, v81);
  v80[0] = &sead__SafeStringBase__vtable;
  v78[0] = &sead__SafeStringBase__vtable;
  v80[1] = "CmnWindow_WinText_Boss_02";
  v78[1] = &byte_60ABC94D;
  v79[0] = &sead__SafeStringBase__vtable;
  v79[1] = "CmnWindow_BtnC_OK_00";
  v77[0] = &sead__SafeStringBase__vtable;
  v77[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[216], 0, v80, v79, v78, v77);
  v76[0] = &sead__SafeStringBase__vtable;
  v74[0] = &sead__SafeStringBase__vtable;
  v76[1] = "CmnWindow_WinText_Boss_03";
  v74[1] = &byte_60ABC94D;
  v75[0] = &sead__SafeStringBase__vtable;
  v75[1] = "CmnWindow_BtnC_OK_00";
  v73[0] = &sead__SafeStringBase__vtable;
  v73[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[225], 0, v76, v75, v74, v73);
  v72[0] = &sead__SafeStringBase__vtable;
  v71[0] = &sead__SafeStringBase__vtable;
  v71[1] = &byte_60ABC94D;
  v69[0] = &sead__SafeStringBase__vtable;
  v72[1] = "CmnWindow_WinText_Boss_04";
  v69[1] = "CmnWindow_BtnR_OK_00";
  v70[0] = &sead__SafeStringBase__vtable;
  v70[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[234], 1, v72, v71, v70, v69);
  v68[0] = &sead__SafeStringBase__vtable;
  v66[0] = &sead__SafeStringBase__vtable;
  v68[1] = "CmnWindow_WinText_Boss_05";
  v66[1] = &byte_60ABC94D;
  v67[0] = &sead__SafeStringBase__vtable;
  v67[1] = "CmnWindow_BtnC_OK_00";
  v65[0] = &sead__SafeStringBase__vtable;
  v65[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[243], 0, v68, v67, v66, v65);
  v64[0] = &sead__SafeStringBase__vtable;
  v63[0] = &sead__SafeStringBase__vtable;
  v63[1] = &byte_60ABC94D;
  v61[0] = &sead__SafeStringBase__vtable;
  v64[1] = "CmnWindow_WinText_EndingSave_00";
  v61[1] = "CmnWindow_BtnR_OK_00";
  v62[0] = &sead__SafeStringBase__vtable;
  v62[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[252], 2, v64, v63, v62, v61);
  v60[0] = &sead__SafeStringBase__vtable;
  v58[0] = &sead__SafeStringBase__vtable;
  v60[1] = "CmnWindow_WinText_Item_00";
  v58[1] = &byte_60ABC94D;
  v59[0] = &sead__SafeStringBase__vtable;
  v59[1] = "CmnWindow_BtnC_OK_00";
  v57[0] = &sead__SafeStringBase__vtable;
  v57[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[261], 0, v60, v59, v58, v57);
  v56[0] = &sead__SafeStringBase__vtable;
  v54[0] = &sead__SafeStringBase__vtable;
  v56[1] = "CmnWindow_WinText_ReKinoko_00";
  v54[1] = &byte_60ABC94D;
  v55[0] = &sead__SafeStringBase__vtable;
  v55[1] = "CmnWindow_BtnC_OK_00";
  v53[0] = &sead__SafeStringBase__vtable;
  v53[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[270], 0, v56, v55, v54, v53);
  v52[0] = &sead__SafeStringBase__vtable;
  v50[0] = &sead__SafeStringBase__vtable;
  v52[1] = "CmnWindow_WinText_Boss_06";
  v50[1] = &byte_60ABC94D;
  v51[0] = &sead__SafeStringBase__vtable;
  v51[1] = "CmnWindow_BtnC_OK_00";
  v49[0] = &sead__SafeStringBase__vtable;
  v49[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[279], 0, v52, v51, v50, v49);
  v48[0] = &sead__SafeStringBase__vtable;
  v46[0] = &sead__SafeStringBase__vtable;
  v48[1] = "CmnWindowDL_WinText_PlayerBlock00";
  v46[1] = &byte_60ABC94D;
  v47[0] = &sead__SafeStringBase__vtable;
  v47[1] = "CmnWindow_BtnC_OK_00";
  v45[0] = &sead__SafeStringBase__vtable;
  v45[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[288], 0, v48, v47, v46, v45);
  v44[0] = &sead__SafeStringBase__vtable;
  v42[0] = &sead__SafeStringBase__vtable;
  v44[1] = "CmnWindow_WinText_SetUpBtn00";
  v42[1] = &byte_60ABC94D;
  v43[0] = &sead__SafeStringBase__vtable;
  v43[1] = "CmnWindow_BtnC_OK_00";
  v41[0] = &sead__SafeStringBase__vtable;
  v41[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[297], 0, v44, v43, v42, v41);
  v40[0] = &sead__SafeStringBase__vtable;
  v39[0] = &sead__SafeStringBase__vtable;
  v39[1] = &byte_60ABC94D;
  v37[0] = &sead__SafeStringBase__vtable;
  v40[1] = "CmnWindow_WinText_EditTitle_00";
  v37[1] = "CmnWindow_BtnR_OK_00";
  v38[0] = &sead__SafeStringBase__vtable;
  v38[1] = "CmnWindow_BtnL_Cancel_00";
  sub_604BA214(&dword_60CA1E08[306], 1, v40, v39, v38, v37);
  v36[0] = &sead__SafeStringBase__vtable;
  v35[0] = &sead__SafeStringBase__vtable;
  v35[1] = &byte_60ABC94D;
  v33[0] = &sead__SafeStringBase__vtable;
  v36[1] = "ModelPlayWindow_WinText_00";
  v33[1] = "ModelPlayWindow_BtnR_00";
  v34[0] = &sead__SafeStringBase__vtable;
  v34[1] = "ModelPlayWindow_BtnL_00";
  sub_604BA214(&dword_60CA1E08[315], 1, v36, v35, v34, v33);
  v32[0] = &sead__SafeStringBase__vtable;
  v31[0] = &sead__SafeStringBase__vtable;
  v31[1] = &byte_60ABC94D;
  v29[0] = &sead__SafeStringBase__vtable;
  v32[1] = "ModelPlayWindow_WinText_01";
  v29[1] = "ModelPlayWindow_BtnR_00";
  v30[0] = &sead__SafeStringBase__vtable;
  v30[1] = "ModelPlayWindow_BtnL_00";
  sub_604BA214(&dword_60CA1E08[324], 1, v32, v31, v30, v29);
  v28[0] = &sead__SafeStringBase__vtable;
  v26[0] = &sead__SafeStringBase__vtable;
  v25[0] = &sead__SafeStringBase__vtable;
  v27[0] = &sead__SafeStringBase__vtable;
  v27[1] = &byte_60ABC94D;
  v28[1] = "ModelPlayWindow_WinText_02";
  v26[1] = "ModelPlayWindow_BtnL_01";
  v25[1] = "ModelPlayWindow_BtnR_01";
  sub_604BA214(&dword_60CA1E08[333], 1, v28, v27, v26, v25);
  v24[0] = &sead__SafeStringBase__vtable;
  v23[0] = &sead__SafeStringBase__vtable;
  v22[0] = &sead__SafeStringBase__vtable;
  v21[0] = &sead__SafeStringBase__vtable;
  v22[1] = &byte_60ABC94D;
  v21[1] = &byte_60ABC94D;
  v24[1] = "MovieSaveWindow_Text_00";
  v23[1] = "MovieSaveWindow_BtnC_00";
  sub_604BA214(&dword_60CA1E08[342], 0, v24, v23, v22, v21);
  v20[0] = &sead__SafeStringBase__vtable;
  v18[0] = &sead__SafeStringBase__vtable;
  v17[0] = &sead__SafeStringBase__vtable;
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = &byte_60ABC94D;
  v20[1] = "MovieSaveWindow_Text_01";
  v18[1] = "MovieSaveWindow_BtnL_00";
  v17[1] = "MovieSaveWindow_BtnR_00";
  sub_604BA214(&dword_60CA1E08[351], 2, v20, v19, v18, v17);
  v16[0] = &sead__SafeStringBase__vtable;
  v15[0] = &sead__SafeStringBase__vtable;
  v14[0] = &sead__SafeStringBase__vtable;
  v13[0] = &sead__SafeStringBase__vtable;
  v15[1] = &byte_60ABC94D;
  v14[1] = &byte_60ABC94D;
  v13[1] = &byte_60ABC94D;
  v16[1] = "MovieSaveWindow_SaveText_00";
  sub_604BA214(&dword_60CA1E08[360], 3, v16, v15, v14, v13);
  v12[0] = &sead__SafeStringBase__vtable;
  v10[0] = &sead__SafeStringBase__vtable;
  v12[1] = "CmnWindow_WinText_ExplainLuigiU";
  v10[1] = &byte_60ABC94D;
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "CmnWindow_BtnC_OK_00";
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = &byte_60ABC94D;
  sub_604BA214(&dword_60CA1E08[369], 0, v12, v11, v10, v9);
  v8[0] = &sead__SafeStringBase__vtable;
  v5[0] = &sead__SafeStringBase__vtable;
  v7[0] = &sead__SafeStringBase__vtable;
  v6[0] = &sead__SafeStringBase__vtable;
  v7[1] = &byte_60ABC94D;
  v6[1] = "CmnWindow_BtnL_Cancel_00";
  v8[1] = "CmnWindow_WinText_EditToBattle_00";
  v5[1] = "CmnWindow_BtnR_OK_00";
  sub_604BA214(&dword_60CA1E08[378], 1, v8, v7, v6, v5);
  v4[0] = &sead__SafeStringBase__vtable;
  v3[0] = &sead__SafeStringBase__vtable;
  v2[0] = &sead__SafeStringBase__vtable;
  v1[0] = &sead__SafeStringBase__vtable;
  v2[1] = &byte_60ABC94D;
  v1[1] = &byte_60ABC94D;
  v4[1] = "ErrorWindow_Text_NoReplay_00";
  v3[1] = "ErrorWindow_BtnIC_OK_00";
  sub_604BA214(&dword_60CA1E08[387], 0, v4, v3, v2, v1);
  sub_60000288();
  dword_60CA24B0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24B4 = (int)"In";
  dword_60CA24B8 = &sead__SafeStringBase__vtable;
  dword_60CA24BC = (int)"Color";
  dword_60CA24C0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24C4 = (int)"Contents";
  dword_60CA24C8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24CC = (int)"PlayMode";
  dword_60CA24D0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24D4 = (int)"Out";
  dword_60CA24D8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24DC = (int)"InQuickSave";
  dword_60CA24E0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24E4 = (int)"LoopQuickSave";
  dword_60CA24E8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24EC = (int)"OutQuickSave";
  dword_60CA24F0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24F4 = (int)"Loop";
  sub_60000288();
  dword_60CA2480 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2484 = (int)"G_All_00";
  dword_60CA2488 = (int)&sead__SafeStringBase__vtable;
  dword_60CA248C = (int)"G_QuickSave_00";
  dword_60CA2490 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2494 = (int)"G_Color_00";
  dword_60CA2498 = (int)&sead__SafeStringBase__vtable;
  dword_60CA249C = (int)"G_PlayMode_00";
  dword_60CA24A0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24A4 = (int)"G_Contents_00";
  dword_60CA24A8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA24AC = (int)"G_Loop_00";
  sub_60000288();
  dword_60CA2454 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2458 = (int)"N_All_00";
  sub_60000288();
  dword_60CA2470[0] = (int)&sead__SafeStringBase__vtable;
  unk_60CA2474 = "T_WinText_00";
  unk_60CA2478 = &sead__SafeStringBase__vtable;
  dword_60CA247C = (int)"T_WinText_01";
  sub_60000288();
  dword_60CA2500 = (int)&sead__SafeStringBase__vtable;
  unk_60CA2504 = "Pa_BtnC_00";
  dword_60CA2508 = &sead__SafeStringBase__vtable;
  dword_60CA250C = (int)"Pa_BtnL_00";
  dword_60CA2510 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2514 = (int)"Pa_BtnR_00";
  dword_60CA2518 = (int)&sead__SafeStringBase__vtable;
  dword_60CA251C = (int)"Pa_1UPBtnC_00";
  dword_60CA2520 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2524 = (int)"Pa_1UPBtnL_00";
  dword_60CA2528 = (int)&sead__SafeStringBase__vtable;
  dword_60CA252C = (int)"Pa_1UPBtnR_00";
  dword_60CA2530 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2534 = (int)"Pa_CoinBtnC_00";
  dword_60CA2538 = (int)&sead__SafeStringBase__vtable;
  dword_60CA253C = (int)"Pa_CoinBtnL_00";
  dword_60CA2540 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2544 = (int)"Pa_CoinBtnR_00";
  dword_60CA2548 = (int)&sead__SafeStringBase__vtable;
  dword_60CA254C = (int)"Pa_SpecialBtnC_00";
  dword_60CA2550 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2554 = (int)"Pa_SpecialBtnL_00";
  dword_60CA2558 = (int)&sead__SafeStringBase__vtable;
  dword_60CA255C = (int)"Pa_SpecialBtnR_00";
  return sub_60000288();
}
