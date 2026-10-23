/* sub_6040F5FC
 * address: 0x6040F5FC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F5FC(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int i; // r8
  int v9; // r0
  int v10; // r9
  int v11; // r6
  void (__fastcall *v12)(int, int, int, _DWORD *, float, _DWORD); // r5
  int v13; // r0
  int v15; // [sp+8h] [bp-C0h]
  _BYTE v16[28]; // [sp+10h] [bp-B8h] BYREF
  int v17; // [sp+2Ch] [bp-9Ch]
  _DWORD v18[20]; // [sp+78h] [bp-50h] BYREF

  v15 = a1 + 1764;
  sead__CriticalSection__lock(a1 + 1764);
  v7 = sub_6090B350(v16);
  v17 = 255;
  sub_6090B4B0(v7, FIELD_U32(a4, 40));
  for ( i = 0; i != 220; ++i )
  {
    v9 = a1 + 8 * i;
    v10 = FIELD_U32(v9, 4);
    if ( v10 && FIELD_U32(v9, 8) == a3 )
    {
      v11 = FIELD_U32(a4, 40);
      sub_6090B260(v10 + 1692, v11);
      v12 = *(void (__fastcall **)(int, int, int, _DWORD *, float, _DWORD))(FIELD_U32(v10, 1692) + 20);
      memset(v18, 0, 16);
      v12(v10 + 1692, v11, 3, v18, 1.0, 0);
      v13 = ((int (__fastcall *)(_DWORD *, float, float, float, float))loc_6090E3D4)(
              v18,
              1.0,
              1.0,
              FIELD_F32(v10, 1696) + -2.0,
              FIELD_F32(v10, 1700) + -2.0);
      sub_6090E560(v13, v11, v10 + 1692);
    }
  }
  return sead__CriticalSection__unlock(v15);
}
