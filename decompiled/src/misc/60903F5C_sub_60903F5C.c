/* sub_60903F5C
 * address: 0x60903F5C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60903F5C(sead_IDisposer *a1, unsigned int a2, int a3)
{
  signed int v4; // r7
  char *containingHeap; // r4
  int v8; // r0
  unsigned int v9; // r0

  v4 = 0;
  FIELD_U32(a1, 0x0) = (int)sead_Decompressor_vtable;
  a1[1].vtable = 0;
  a1[1].containingHeap = 0;
  a1[1].field_8 = (int)a1;
  a1[1].field_C = 0;
  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)sead_Decompressor_vtable;
  a1[2].containingHeap = (int)&a1[2].field_C;
  a1[2].vtable = (int)&BufferedSafeStringBase_char_vtable_probably;
  a1[2].field_8 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a1[2]);
  a1[2].vtable = (int)&off_60BD4C38;
  containingHeap = (char *)a1[2].containingHeap;
  if ( containingHeap != "szs" )
  {
    while ( aSzs[v4] )
    {
      if ( v4 >= 0x80000 )
      {
        v4 = 0;
        break;
      }
      if ( !aSzs[v4 + 1] )
      {
        ++v4;
        break;
      }
      v4 += 2;
    }
    v8 = a1[2].field_8;
    if ( v4 >= v8 )
      v4 = v8 - 1;
    qmemcpy((void *)a1[2].containingHeap, "szs", v4);
    containingHeap[v4] = 0;
  }
  a1[2].vtable = (int)&off_60BD4C20;
  FIELD_U32(a1, 0x0) = (int)off_60C5CBDC;
  v9 = (a2 + 31) & 0xFFFFFFE0;
  if ( a3 )
    v9 = a2;
  a1[4].field_C = v9;
  a1[5].vtable = a3;
  return a1;
}
