/* sub_6036A6A8
 * address: 0x6036A6A8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036A6A8(int a1, float a2)
{
  _BYTE *v3; // r5
  int v4; // r6
  float v5; // s0
  int v6; // r8
  int v7; // r0
  int v8; // r1
  int v9; // r0
  float v10; // s0
  char v11; // r1
  char v12; // r2
  int v13; // r1
  bool v14; // zf
  int v16; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v17[3]; // [sp+8h] [bp-28h] BYREF
  float v18; // [sp+14h] [bp-1Ch] BYREF

  FIELD_U8(a1, 6312) = 0;
  v3 = (_BYTE *)(a1 + 6312);
  v4 = FIELD_U32(a1, 2872);
  v5 = CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  v6 = *((_DWORD *)v3 - 860);
  v18 = 0.0;
  v7 = *((_DWORD *)v3 - 1549);
  v8 = *((_DWORD *)v3 - 1550);
  v17[0] = *((_DWORD *)v3 - 1551);
  v17[1] = v8;
  v17[2] = v7;
  ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD, float))checkLiquidCollisions)(
    &v16,
    &v18,
    v17,
    (unsigned __int8)*(v3 - 6226),
    v5);
  v9 = v4 & 1;
  if ( v16 == 1 && FIELD_F32(a1, 124) < 0.0 )
  {
    v10 = v18 + -4.0;
    if ( FIELD_F32(a1, 112) < (float)(v18 + -4.0) )
    {
      FIELD_U32(a1, 2872) |= 1u;
      FIELD_F32(a1, 112) = v10;
      v11 = *v3 | 0x10;
      *v3 = v11;
      v12 = v11;
LABEL_9:
      v14 = v9 == 0;
      if ( (v4 & 1) == 0 )
        LOBYTE(v9) = v12 | 3;
      *v3 = v12 | 1;
      v13 = 0;
      if ( v14 )
        *v3 = v9;
      goto LABEL_13;
    }
  }
  v12 = *v3;
  if ( (v6 & 1) != 0 )
    goto LABEL_9;
  *v3 = v12 | (4 * v9) | 8;
  v13 = FIELD_U32(a1, 6308) + 1;
  FIELD_U32(a1, 6308) = v13;
  if ( v13 >= 8 )
    v13 = 8;
LABEL_13:
  FIELD_U32(a1, 6308) = v13;
  return 6308;
}
