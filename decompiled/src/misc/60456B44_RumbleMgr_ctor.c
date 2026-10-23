/* RumbleMgr_ctor
 * address: 0x60456B44   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall RumbleMgr_ctor(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = CalculateTask2_ctor(a1, a2, (int)"RumbleMgr");
  FIELD_U32(result, 0x0) = (int)off_60BFB12C;
  LOBYTE(result[12].vtable) = 0;
  result[12].field_C = 0;
  result[12].field_8 = (int)&result[12].containingHeap;
  result[12].containingHeap = (int)&result[12].containingHeap;
  result[13].vtable = (int)&result[13].field_C;
  result[13].field_C = (int)&result[16];
  result[16].vtable = (int)&result[18].containingHeap;
  result[18].containingHeap = (int)&result[20].field_8;
  result[20].field_8 = (int)&result[22].field_C;
  result[22].field_C = (int)&result[25];
  result[25].vtable = (int)&result[27].containingHeap;
  result[27].containingHeap = (int)&result[29].field_8;
  result[29].field_8 = (int)&result[31].field_C;
  result[31].field_C = (int)&result[34];
  result[34].vtable = (int)&result[36].containingHeap;
  result[36].containingHeap = (int)&result[38].field_8;
  result[38].field_8 = (int)&result[40].field_C;
  result[40].field_C = (int)&result[43];
  result[43].vtable = (int)&result[45].containingHeap;
  result[45].containingHeap = (int)&result[47].field_8;
  result[47].field_8 = 0;
  result[13].containingHeap = (int)&result[13].field_C;
  result[13].field_8 = 16;
  result[50].containingHeap = 0;
  result[50].vtable = (int)&result[49].field_C;
  result[49].field_C = (int)&result[49].field_C;
  result[50].field_8 = (int)&result[51].containingHeap;
  result[51].containingHeap = (int)&result[53].field_8;
  result[53].field_8 = (int)&result[55].field_C;
  result[55].field_C = (int)&result[58];
  result[58].vtable = (int)&result[60].containingHeap;
  result[60].containingHeap = (int)&result[62].field_8;
  result[62].field_8 = (int)&result[64].field_C;
  result[64].field_C = (int)&result[67];
  result[67].vtable = (int)&result[69].containingHeap;
  result[69].containingHeap = (int)&result[71].field_8;
  result[71].field_8 = (int)&result[73].field_C;
  result[73].field_C = (int)&result[76];
  result[76].vtable = (int)&result[78].containingHeap;
  result[78].containingHeap = (int)&result[80].field_8;
  result[80].field_8 = (int)&result[82].field_C;
  result[82].field_C = (int)&result[85];
  result[85].vtable = 0;
  result[50].field_C = (int)&result[51].containingHeap;
  result[51].vtable = 16;
  result[87].field_C = 0;
  result[87].field_8 = (int)&result[87].containingHeap;
  result[87].containingHeap = (int)&result[87].containingHeap;
  result[88].vtable = (int)&result[88].field_C;
  result[88].field_C = (int)&result[91];
  result[91].vtable = (int)&result[93].containingHeap;
  result[93].containingHeap = (int)&result[95].field_8;
  result[95].field_8 = (int)&result[97].field_C;
  result[97].field_C = (int)&result[100];
  result[100].vtable = (int)&result[102].containingHeap;
  result[102].containingHeap = (int)&result[104].field_8;
  result[104].field_8 = (int)&result[106].field_C;
  result[106].field_C = (int)&result[109];
  result[109].vtable = (int)&result[111].containingHeap;
  result[111].containingHeap = (int)&result[113].field_8;
  result[113].field_8 = (int)&result[115].field_C;
  result[115].field_C = (int)&result[118];
  result[118].vtable = (int)&result[120].containingHeap;
  result[120].containingHeap = (int)&result[122].field_8;
  result[122].field_8 = 0;
  result[88].containingHeap = (int)&result[88].field_C;
  result[88].field_8 = 16;
  result[125].containingHeap = 0;
  result[125].vtable = (int)&result[124].field_C;
  result[124].field_C = (int)&result[124].field_C;
  result[125].field_8 = (int)&result[126].containingHeap;
  result[126].containingHeap = (int)&result[128].field_8;
  result[128].field_8 = (int)&result[130].field_C;
  result[130].field_C = (int)&result[133];
  result[133].vtable = (int)&result[135].containingHeap;
  result[135].containingHeap = (int)&result[137].field_8;
  result[137].field_8 = (int)&result[139].field_C;
  result[139].field_C = (int)&result[142];
  result[142].vtable = (int)&result[144].containingHeap;
  result[144].containingHeap = (int)&result[146].field_8;
  result[146].field_8 = (int)&result[148].field_C;
  result[148].field_C = (int)&result[151];
  result[151].vtable = (int)&result[153].containingHeap;
  result[153].containingHeap = (int)&result[155].field_8;
  result[155].field_8 = (int)&result[157].field_C;
  result[157].field_C = (int)&result[160];
  result[160].vtable = 0;
  result[125].field_C = (int)&result[126].containingHeap;
  result[126].vtable = 16;
  LOBYTE(result[162].containingHeap) = 15;
  BYTE1(result[162].containingHeap) = 0;
  return result;
}
