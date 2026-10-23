/* sub_607B7C9C
 * address: 0x607B7C9C   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B7C9C(int a1)
{
  int v2; // r5
  int v3; // r6
  char v4; // r12
  int v5; // r0
  int v6; // r1
  float v7; // s0
  float v8; // r1
  float v9; // s0
  float v10; // r0
  float v11; // s16
  char *v12; // r0
  float v13; // s2
  float v14; // s1
  int v15; // r0
  float v16; // s0
  float v18[3]; // [sp+4h] [bp-3Ch] BYREF
  float v19; // [sp+10h] [bp-30h] BYREF
  float v20[11]; // [sp+14h] [bp-2Ch] BYREF

  v2 = 0;
  if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B374 & ~(1618705648 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
      {
        v5 = FIELD_U32(v3, 6900);
        if ( (v5 & 1) != 0 && (FIELD_U8(v3, 1207) & 2) == 0 )
        {
          v6 = FIELD_U32(v3, 1216);
          if ( (v6 & 0x2000) != 0 )
          {
            if ( (v5 & 2) != 0 )
            {
              v2 = 1;
              FIELD_U32(a1, 9964) = 30;
              FIELD_U32(a1, 1204) |= 0x40000000u;
              (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)a1 + 748))(
                a1,
                1,
                0,
                0,
                0.0,
                FIELD_F32(v3, 88) * 0.5);
              return v2;
            }
            v7 = FIELD_F32(v3, 112);
            v8 = FIELD_F32(a1, 116);
            v20[0] = FIELD_F32(a1, 108);
            v20[1] = v7 + 4.0;
            v20[2] = v8;
            if ( !sub_60155B0C(
                    v3 + 1328,
                    v20,
                    0,
                    1,
                    (float)(FIELD_F32(v3, 108) - v20[0]) * flt_60B0A898[FIELD_U32(a1, 80)]) )
            {
              v9 = FIELD_F32(a1, 112);
              v10 = FIELD_F32(a1, 116);
              v18[0] = FIELD_F32(a1, 108);
              v18[1] = v9 + 8.0;
              v18[2] = v10;
              if ( sub_60155C38(v3 + 1328, v18, &v19, 0, 40.0) == 1 )
              {
                v11 = FIELD_F32(a1, 112);
                v12 = sub_60799A08(a1, FIELD_U32(a1, 1320), 1);
                if ( (float)(v11 + *((float *)v12 + 5)) > v19 )
                {
                  FIELD_U32(a1, 9964) = 30;
                  FIELD_U32(a1, 1204) |= 0x40000000u;
                  (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)a1 + 748))(
                    a1,
                    1,
                    0,
                    0,
                    0.0,
                    FIELD_F32(v3, 88) * 0.5);
                  return 1;
                }
              }
            }
            v6 = FIELD_U32(v3, 1216);
          }
          if ( (v6 & 0x2000) == 0 )
          {
            if ( ((int (__fastcall *)(int, float *))loc_607B80F0)(v3, v20) == 1 )
            {
              v2 = 1;
              FIELD_U32(a1, 9964) = 30;
              v13 = flt_60B0A898[LODWORD(v20[0])];
              v14 = -v13;
              FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)(v13 * -3.0);
              v15 = *(_DWORD *)a1;
              v16 = FIELD_F32(v3, 124);
            }
            else
            {
              if ( (FIELD_U8(v3, 6903) & 0x40) == 0 )
                return v2;
              v16 = 0.0;
              v2 = 0;
              FIELD_U32(a1, 9964) = 30;
              v15 = *(_DWORD *)a1;
              v14 = 0.0;
            }
            (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(v15 + 748))(a1, 1, 0, 0, v16, v14);
          }
        }
      }
    }
  }
  return v2;
}
