/* sub_6047611C
 * address: 0x6047611C   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_6047611C(sead_IDisposer *a1, int a2, int a3)
{
  sead_IDisposer *result; // r0
  char v6; // r2
  int v7; // r1

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60BFCA78;
  result[1].containingHeap = 0;
  result[1].field_8 = 0;
  result[1].field_C = 0;
  result[2].vtable = 0;
  result[2].containingHeap = 0;
  result[2].field_8 = 0;
  result[2].field_C = 0;
  result[1].vtable = 0;
  result[3].vtable = 32;
  result[2].containingHeap = (int)&result[3].containingHeap;
  result[3].containingHeap = (int)&result[10];
  result[10].vtable = (int)&result[16].field_C;
  result[16].field_C = (int)&result[23].field_8;
  result[23].field_8 = (int)&result[30].containingHeap;
  result[30].containingHeap = (int)&result[37];
  result[37].vtable = (int)&result[43].field_C;
  result[43].field_C = (int)&result[50].field_8;
  result[50].field_8 = (int)&result[57].containingHeap;
  result[57].containingHeap = (int)&result[64];
  result[64].vtable = (int)&result[70].field_C;
  result[70].field_C = (int)&result[77].field_8;
  result[77].field_8 = (int)&result[84].containingHeap;
  result[84].containingHeap = (int)&result[91];
  result[91].vtable = (int)&result[97].field_C;
  result[97].field_C = (int)&result[104].field_8;
  result[104].field_8 = (int)&result[111].containingHeap;
  result[111].containingHeap = (int)&result[118];
  result[118].vtable = (int)&result[124].field_C;
  result[124].field_C = (int)&result[131].field_8;
  result[131].field_8 = (int)&result[138].containingHeap;
  result[138].containingHeap = (int)&result[145];
  result[145].vtable = (int)&result[151].field_C;
  result[151].field_C = (int)&result[158].field_8;
  result[158].field_8 = (int)&result[165].containingHeap;
  result[165].containingHeap = (int)&result[172];
  result[172].vtable = (int)&result[178].field_C;
  result[178].field_C = (int)&result[185].field_8;
  result[185].field_8 = (int)&result[192].containingHeap;
  result[192].containingHeap = (int)&result[199];
  result[199].vtable = (int)&result[205].field_C;
  result[205].field_C = (int)&result[212].field_8;
  result[212].field_8 = 0;
  result[2].field_8 = (int)&result[3].containingHeap;
  v6 = a2;
  if ( a2 )
    v6 = 1;
  v7 = (unsigned __int8)v6 & (a3 > 0);
  if ( ((unsigned __int8)v6 & (a3 > 0)) != 0 )
    v7 = a2;
  else
    a3 = 0;
  result[219].containingHeap = a3;
  result[219].field_8 = v7;
  FIELD_U32(result, 0x0) = (int)off_60BFCAB0;
  return result;
}
