/* sub_60400980
 * address: 0x60400980   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60400980(int a1, int a2, int a3, int a4, int a5)
{
  char v7; // r6
  int result; // r0
  _DWORD v9[6]; // [sp+8h] [bp-18h] BYREF

  v7 = a2;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "****-----------****----------****---------***----------";
  if ( a2 < 0 )
    sub_6045744C(dword_60C9CF18, (int)v9, 50, a5);
  else
    sub_60457304(dword_60C9CF18, a2, v9, 50, a5);
  FIELD_U8(a1, 65) = v7;
  result = FIELD_U32(a1, 56) | a4;
  FIELD_U32(a1, 56) = result;
  return result;
}
