/* sub_60835C50
 * address: 0x60835C50   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835C50(int a1, int a2, int *a3, int a4)
{
  int v4; // r12
  _DWORD *v5; // lr
  _DWORD *v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r2
  _DWORD v11[8]; // [sp+8h] [bp-58h] BYREF
  _DWORD v12[14]; // [sp+28h] [bp-38h] BYREF

  v4 = 0;
  memset(v12, 0, 32);
  memset(v11, 0, sizeof(v11));
  if ( a2 >= 1 )
  {
    v5 = v12;
    v6 = v11;
    v7 = a2;
    do
    {
      v8 = *a3;
      if ( *a3 )
      {
        *v5 = FIELD_U32(v8, 8);
        *v6 = FIELD_U32(v8, 16);
      }
      --v7;
      ++v6;
      ++v5;
      ++a3;
    }
    while ( v7 );
  }
  if ( a4 )
  {
    v4 = FIELD_U32(a4, 8);
    v9 = FIELD_U32(a4, 16);
  }
  else
  {
    v9 = 0;
  }
  return ((int (__fastcall *)(_DWORD, int, _DWORD *, _DWORD *, int, int))dword_60CC7954)(
           FIELD_U32(a1, 184),
           a2,
           v12,
           v11,
           v4,
           v9);
}
