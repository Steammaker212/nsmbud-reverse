/* CollisionMgr_process_helper_14E8B8
 * address: 0x6014E8B8   size: 652   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionMgr_process_helper_14E8B8(_DWORD *a1, int a2)
{
  int v4; // r0
  char v5; // r1
  _DWORD *v6; // r3
  _DWORD *v7; // r3
  int v8; // t1
  int result; // r0
  unsigned int v10; // r7
  _DWORD *v11; // r6
  _DWORD *v12; // r6
  int v13; // t1
  _DWORD *v14; // r4
  int v15; // r2
  int *v16; // r4
  int v17; // t1
  _DWORD *v18; // r4
  int v19; // r8
  int *v20; // r8
  int v21; // t1
  int v22; // r11
  int v23; // r12
  int v24; // r7
  int v25; // r6
  int v26; // r2
  bool v27; // zf
  int v28; // r1
  bool v29; // zf
  unsigned int v30; // r5
  int *v31; // [sp+4h] [bp-2Ch]
  int v32; // [sp+8h] [bp-28h]

  v4 = a2 + 18;
  v5 = (a2 + 18) & 0x1F;
  v6 = &a1[v4 >> 5];
  v8 = v6[556];
  v7 = v6 + 556;
  if ( (v8 & (1 << v5)) != 0 || (result = (a2 + 22) & 0x1F, (a1[((a2 + 22) >> 5) + 556] & (1 << result)) != 0) )
  {
    v10 = a2 + 28;
    result = (a2 + 28) & 0x1F;
    v11 = &a1[(a2 + 28) >> 5];
    v13 = v11[556];
    v12 = v11 + 556;
    if ( (v13 & (1 << result)) == 0 )
    {
      v14 = &a1[a2];
      v17 = v14[640];
      v16 = v14 + 640;
      v15 = v17;
      if ( v17 <= 5 )
      {
        v31 = v16;
        v18 = &a1[2 * a2];
        v32 = 7 * v15;
        v19 = (int)&a1[84 * a2 + 14 * v15];
        v21 = FIELD_U32(v19, 2632);
        v20 = (int *)(v19 + 2632);
        v22 = v20[1];
        v18[1320] = v21;
        v23 = 1 << result;
        v18[1321] = v22;
        if ( (v21 & 0xFFFFFF) == 0x4000D && v10 <= 0x20 )
          a1[(v10 >> 5) + 556] |= v23;
        v24 = *v20;
        if ( (unsigned __int16)*v20 == 0xF && dword_60AF2374[a2] == BYTE2(v24) )
        {
          v18[1329] = v20[1];
          v18[1328] = v24;
        }
        result = HIBYTE(a1[84 * a2 + 648 + 14 * v15]);
        if ( HIBYTE(a1[84 * a2 + 648 + 14 * v15]) )
        {
          result = *v7 & (1 << v5);
          if ( (result || (a1[((a2 + 22) >> 5) + 556] & (1 << ((a2 + 22) & 0x1F))) != 0) && (*v12 & v23) == 0 )
          {
            if ( result || (result = (a2 + 22) & 0x1F, (a1[((a2 + 22) >> 5) + 556] & (1 << result)) != 0) )
            {
              result = *v31;
              if ( *v31 <= 5 )
              {
                v25 = (int)&a1[84 * a2 + 14 * result];
                result = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v25, 2620));
                v27 = result == 0;
                if ( result )
                {
                  result = FIELD_U32(v25, 2624);
                  v27 = result == 0;
                }
                if ( !v27 )
                {
                  if ( BYTE2(a1[84 * a2 + 648 + 2 * v32]) )
                  {
                    v28 = a1[632];
                    v29 = (v28 & 0x40000) == 0;
                    if ( (v28 & 0x40000) != 0 )
                    {
                      v26 = a1[634];
                      v29 = (v26 & 0x40000) == 0;
                    }
                    if ( !v29 && !*(_BYTE *)(a1[549] + 19) )
                    {
                      if ( !a2 )
                      {
                        v30 = 20;
                        if ( (v28 & 0x80000) == 0 )
                          sub_601602F8();
LABEL_27:
                        result = (int)&a1[v30 >> 5];
                        FIELD_U32(result, 2224) |= 1 << (v30 & 0x1F);
                        return result;
                      }
                      if ( (v26 & 0x100000) == 0 )
                        result = sub_60160370();
                    }
                  }
                  v30 = a2 + 20;
                  if ( v30 > 0x20 )
                    return result;
                  goto LABEL_27;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
