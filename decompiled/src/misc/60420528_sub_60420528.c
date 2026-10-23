/* sub_60420528
 * address: 0x60420528   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420528(_DWORD *a1, int a2, int a3)
{
  int i; // r5
  char *v7; // r0
  int result; // r0
  _DWORD *v9; // [sp+0h] [bp-30h]
  int (**v10)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v11; // [sp+8h] [bp-28h]

  v10 = &sead__SafeStringBase__vtable;
  v11 = (const char *)&unk_60AC7A9E;
  v9 = a1 + 19;
  ((void (*)(void))sub_609189A0)();
  v10 = &sead__SafeStringBase__vtable;
  v11 = "skeleton";
  sub_609189A0(a1 + 20, a2, a3, &v10);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "shape";
  sub_609189A0(a1 + 21, a2, a3, &v10);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "material";
  sub_609189A0(a1 + 22, a2, a3, &v10);
  for ( i = 0; i != 14; ++i )
  {
    v7 = off_60BF9E30[i];
    v10 = &sead__SafeStringBase__vtable;
    v11 = v7;
    sub_60918B70(&a1[i + 5], a2, a3, &v10);
  }
  a1[3] = sub_6090FD94(a1 + 5, 56);
  a1[2] = sub_6090FD94(v9, 16);
  result = a1[5] != -1;
  if ( a1[6] != -1 )
    result |= 2u;
  if ( a1[7] != -1 )
    result |= 4u;
  if ( a1[8] != -1 )
    result |= 8u;
  if ( a1[9] != -1 )
    result |= 0x10u;
  if ( a1[10] != -1 )
    result |= 0x20u;
  if ( a1[11] != -1 )
    result |= 0x40u;
  if ( a1[12] != -1 )
    result |= 0x80u;
  if ( a1[13] != -1 )
    result |= 0x100u;
  if ( a1[14] != -1 )
    result |= 0x200u;
  if ( a1[15] != -1 )
    result |= 0x400u;
  if ( a1[16] != -1 )
    result |= 0x800u;
  if ( a1[17] != -1 )
    result |= 0x1000u;
  if ( a1[18] != -1 )
    result |= 0x2000u;
  a1[4] = result;
  return result;
}
