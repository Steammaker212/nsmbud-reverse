/* sub_6013B138
 * address: 0x6013B138   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013B138(int a1)
{
  int *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // t1
  int v11; // r5
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  int result; // r0
  signed int v16; // r0
  signed int v17; // r6
  int v18; // r0
  unsigned int v19; // r0
  _DWORD *v20; // r1
  _DWORD *v21; // r2
  int v22; // r2
  bool v23; // zf

  v4 = FIELD_U32(a1, 6760);
  v2 = (int *)(a1 + 6760);
  v3 = v4;
  if ( v4 >= 1 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( !v5 )
    {
      v6 = FIELD_U32(a1, 6768);
      if ( v6 >= 4 )
        v6 = 0;
      v7 = EnemyCounterMaybe_instance + 8 * v6;
      v10 = FIELD_U32(v7, 104);
      v8 = (_DWORD *)(v7 + 104);
      v9 = v10;
      if ( v10 >= 1 )
        *v8 = v9 - 1;
    }
  }
  nullsub_625();
  sub_600035C0(a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v11 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v12 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v12 + 18) >> 5) + 2224) & (1 << ((v12 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v11 + 4 * ((v12 + 22) >> 5) + 2224) & (1 << ((v12 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v11 + 4 * ((v12 + 28) >> 5) + 2224) & (1 << ((v12 + 28) & 0x1F))) == 0
    || (FIELD_U32(a1, 2872) & 0x10400) == 0x400
    || (FIELD_U32(a1, 5956) & 0xFF00) == 0x300
    || (v13 = sub_6014C508(a1 + 648, v12),
        (float)(*(float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0))
              + (float)((float)((float)(v13 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v13 >> 20) & 0xFF0)))
                      * 0.000000059605)) >= (float)(*(float *)((char *)sinLutTable
                                                             + (((unsigned int)(int)(float)((float)(2147500000.0 * 63.4)
                                                                                          / 180.0) >> 20)
                                                              & 0xFF0))
                                                  + (float)((float)((float)((int)(float)((float)(2147500000.0 * 63.4)
                                                                                       / 180.0)
                                                                          & 0xFFFFFF)
                                                                  * *(float *)((char *)&sinLutTable[1]
                                                                             + (((unsigned int)(int)(float)((float)(2147500000.0 * 63.4) / 180.0) >> 20)
                                                                              & 0xFF0)))
                                                          * 0.000000059605)))
    || (v14 = FIELD_U32(a1, 6764), FIELD_U32(a1, 6764) = v14 + 1, v14 >= 599) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
    return sub_601362A0(a1);
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    result = sub_60136894(a1);
    if ( !result )
    {
      v16 = sub_6014C4A4(a1 + 648);
      v17 = sub_6014C57C(a1 + 648, v16);
      v18 = sub_6014C540(a1 + 648);
      if ( v18 )
      {
        if ( v18 != 1 )
        {
          v19 = FIELD_U32(a1, 80);
          v20 = &unk_60AF67FC;
          v21 = &unk_60AF67D4;
          goto LABEL_26;
        }
        v19 = FIELD_U32(a1, 80);
        if ( v19 )
        {
          v20 = &unk_60AF67FC;
          v21 = &unk_60AF67D4;
LABEL_26:
          v22 = v21[v17];
          v23 = v19 == 0;
          FIELD_U32(a1, 120) = v22;
          if ( v19 )
            v19 = v22 ^ 0x80000000;
          FIELD_U32(a1, 124) = v20[v17];
          if ( !v23 )
            FIELD_U32(a1, 120) = v19;
          return sub_60136948(a1);
        }
        v19 = 0;
      }
      else
      {
        v19 = 1;
        if ( FIELD_U32(a1, 80) != 1 )
        {
          v20 = &unk_60AF67FC;
          v21 = &unk_60AF67D4;
          v19 = FIELD_U32(a1, 80);
          goto LABEL_26;
        }
      }
      v20 = &unk_60AF6810;
      v21 = &unk_60AF67E8;
      goto LABEL_26;
    }
  }
  return result;
}
