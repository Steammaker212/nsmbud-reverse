/* sub_6024E50C
 * address: 0x6024E50C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024E50C(int a1)
{
  float v2; // s0
  int v3; // r5
  int result; // r0
  int v5; // r1
  int v6; // r1
  unsigned int v7; // r2
  int v8; // r1
  int v9; // r2

  StageActor__accelerateX((StageActor *)a1);
  sub_600035C0(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  v2 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = v2;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  v3 = a1 + 6464;
  nullsub_7();
  result = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(a1 + 6464 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v3 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v3 + 4 * ((result + 28) >> 5) + 2224) & (1 << ((result + 28) & 0x1F))) == 0 )
  {
    FIELD_U64(a1, 96) = 0xBC8000003F800000LL;
  }
  v5 = FIELD_U32(a1, 156);
  if ( v5 >= 0x4000000 )
  {
    v6 = v5 - 0x4000000;
    FIELD_U32(a1, 156) = v6;
    FIELD_U32(a1, 160) = dword_60AF1F58[result];
    if ( v6 )
      return result;
  }
  else
  {
    FIELD_U32(a1, 156) = 0;
    FIELD_U32(a1, 160) = dword_60AF1F58[result];
  }
  if ( FIELD_F32(a1, 124) == 0.0 )
  {
    v7 = FIELD_S8(a1, 6332);
    v8 = 0;
    if ( v7 <= 3 )
    {
      v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32);
      if ( v9 )
        v8 = (float)((float)(FIELD_F32(v9, 108) + FIELD_F32(v9, 572))
                   - (float)(FIELD_F32(a1, 108) + FIELD_F32(a1, 572))) < 0.0;
    }
    if ( v8 != result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DE38);
  }
  return result;
}
