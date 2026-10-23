/* sub_605EA7EC
 * address: 0x605EA7EC   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EA7EC(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  int *v5; // r6
  bool v6; // cc
  int v7; // r7
  signed int v9[3]; // [sp+4h] [bp-5Ch] BYREF
  float32x2_t v10; // [sp+10h] [bp-50h] BYREF
  int v11; // [sp+1Ch] [bp-44h]
  int v12; // [sp+2Ch] [bp-34h]
  int v13; // [sp+3Ch] [bp-24h]

  v2 = **(_DWORD **)(a1 + 12);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 60))(v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
  v3 = 357913941;
  v5 = (int *)(a1 + 108);
  v4 = FIELD_U32(a1, 108);
  if ( v4 < 357913941 )
    v3 = FIELD_U32(a1, 108);
  v6 = v4 < -357913941;
  LOWORD(v4) = 8738;
  if ( v6 )
    v3 = 43691;
  HIWORD(v4) = 546;
  if ( v6 )
    HIWORD(v3) = -5462;
  *v5 = v3;
  v10.n64_u32[0] = v4;
  v9[0] = 7158278;
  sub_608322C0((int *)(a1 + 104), (int *)(a1 + 108), (signed int *)&v10, v9);
  v7 = **(_DWORD **)(a1 + 12);
  (*(void (__fastcall **)(int, int, float32x2_t *, signed int *))(*(_DWORD *)v7 + 100))(v7, 4, &v10, v9);
  Mtx34_rotateZ(&v10, (unsigned int *)(a1 + 104));
  (*(void (__fastcall **)(int, int, float32x2_t *, signed int *))(*(_DWORD *)v7 + 96))(v7, 4, &v10, v9);
  if ( (FIELD_U8(a1, 176) & 8) == 0 )
    *v5 = 0;
  sub_6040EC24(a1 + 16, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 56))(v2);
  ((void (__fastcall *)(int))loc_605EA968)(a1);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)(a1 + 12) + 108))(**(_DWORD **)(a1 + 12), 1, &v10);
  FIELD_U32(a1, 112) = v11;
  FIELD_U32(a1, 116) = v12;
  FIELD_U32(a1, 120) = v13;
  return (*(int (__fastcall **)(_DWORD, _DWORD, int))(***(_DWORD ***)(a1 + 12) + 108))(
           **(_DWORD **)(a1 + 12),
           0,
           a1 + 124);
}
