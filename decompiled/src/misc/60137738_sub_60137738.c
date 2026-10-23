/* sub_60137738
 * address: 0x60137738   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60137738(int a1)
{
  int v2; // r5
  int v3; // r0
  int result; // r0
  unsigned int v5; // r0
  signed int v6; // r0
  signed int v7; // r6
  int v8; // r0
  _DWORD *v9; // r1
  _DWORD *v10; // r2
  int v11; // r2
  bool v12; // zf

  sub_600035C0(a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v3 + 18) >> 5) + 2224) & (1 << ((v3 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v2 + 4 * ((v3 + 22) >> 5) + 2224) & (1 << ((v3 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v2 + 4 * ((v3 + 28) >> 5) + 2224) & (1 << ((v3 + 28) & 0x1F))) == 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
    return sub_601362A0(a1);
  }
  result = sub_60136894(a1);
  if ( !result )
  {
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      result = FIELD_U32(a1, 5956) & 0xFF00;
      if ( result != 0x300 )
      {
        v5 = sub_6014C508(a1 + 648, FIELD_U32(a1, 80));
        if ( (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                   + (float)((float)((float)(v5 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
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
                                                               * 0.000000059605)) )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
          sub_601362A0(a1);
        }
        v6 = sub_6014C4A4(a1 + 648);
        v7 = sub_6014C57C(a1 + 648, v6);
        v8 = sub_6014C540(a1 + 648);
        if ( v8 )
        {
          if ( v8 != 1 )
          {
            result = FIELD_U32(a1, 80);
            v9 = &unk_60AF66E4;
            v10 = &unk_60AF66BC;
            goto LABEL_19;
          }
          result = FIELD_U32(a1, 80);
          if ( result )
          {
            v9 = &unk_60AF66E4;
            v10 = &unk_60AF66BC;
LABEL_19:
            v11 = v10[v7];
            v12 = result == 0;
            FIELD_U32(a1, 120) = v11;
            if ( result )
              result = v11 ^ 0x80000000;
            FIELD_U32(a1, 124) = v9[v7];
            if ( !v12 )
              FIELD_U32(a1, 120) = result;
            return result;
          }
          result = 0;
        }
        else
        {
          result = 1;
          if ( FIELD_U32(a1, 80) != 1 )
          {
            v9 = &unk_60AF66E4;
            v10 = &unk_60AF66BC;
            result = FIELD_U32(a1, 80);
            goto LABEL_19;
          }
        }
        v9 = &unk_60AF66F8;
        v10 = &unk_60AF66D0;
        goto LABEL_19;
      }
    }
  }
  return result;
}
