/* sub_6063FF74
 * address: 0x6063FF74   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063FF74(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r6
  int v4; // r9
  _DWORD **v5; // r7
  unsigned int *v6; // r1
  int v7; // r5
  unsigned int *v8; // r1
  int v9; // r5
  unsigned int *v10; // r1
  int v12; // [sp+4h] [bp-64h] BYREF
  _BYTE v13[12]; // [sp+8h] [bp-60h] BYREF
  float32x2_t v14[6]; // [sp+14h] [bp-54h] BYREF
  unsigned int v15[9]; // [sp+44h] [bp-24h] BYREF

  v2 = (unsigned __int64)(1431655766LL * FIELD_S32(a1, 6236)) >> 32;
  v3 = v2 + (v2 >> 31);
  v15[0] = v3;
  v4 = FIELD_U32(a1, 6284);
  v5 = (_DWORD **)(a1 + 6108);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(***(_DWORD ***)(a1 + 6108) + 100))(
    **(_DWORD **)(a1 + 6108),
    v4,
    v14,
    v13);
  if ( FIELD_U32(a1, 80) == 1 )
  {
    v6 = (unsigned int *)&v12;
    v12 = -v3;
  }
  else
  {
    v6 = v15;
  }
  Mtx34_rotateY(v14, v6);
  Mtx34_rotateZ(v14, v15);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v5 + 96))(**v5, v4, v14, v13);
  v7 = FIELD_U32(a1, 6288);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v5 + 100))(**v5, v7, v14, v13);
  if ( FIELD_U32(a1, 80) == 1 )
  {
    v8 = (unsigned int *)&v12;
    v12 = -v15[0];
  }
  else
  {
    v8 = v15;
  }
  Mtx34_rotateY(v14, v8);
  Mtx34_rotateZ(v14, v15);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v5 + 96))(**v5, v7, v14, v13);
  v9 = FIELD_U32(a1, 6292);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v5 + 100))(**v5, v9, v14, v13);
  if ( FIELD_U32(a1, 80) == 1 )
  {
    v10 = (unsigned int *)&v12;
    v12 = -v15[0];
  }
  else
  {
    v10 = v15;
  }
  Mtx34_rotateY(v14, v10);
  Mtx34_rotateZ(v14, v15);
  return (*(int (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v5 + 96))(**v5, v9, v14, v13);
}
