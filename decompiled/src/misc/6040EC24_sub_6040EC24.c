/* sub_6040EC24
 * address: 0x6040EC24   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040EC24(int a1, int a2)
{
  int v4; // r0
  int v5; // r9
  int i; // r6
  _BYTE v8[12]; // [sp+4h] [bp-5Ch] BYREF
  _BYTE v9[80]; // [sp+10h] [bp-50h] BYREF

  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 92))(a2);
  v5 = FIELD_U32(a1, 36);
  if ( v4 < v5 )
    v5 = v4;
  if ( v5 >= 1 )
  {
    for ( i = 0; i < v5; ++i )
    {
      (*(void (__fastcall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 100))(a2, i, v9, v8);
      ((void (__fastcall *)(int, _BYTE *, _BYTE *, int))loc_6040ECCC)(a1, v9, v8, i);
      (*(void (__fastcall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 96))(a2, i, v9, v8);
    }
  }
  FIELD_U16(a1, 60) = 1;
  return 1;
}
