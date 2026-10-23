/* sub_608C4410
 * address: 0x608C4410   size: 1428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C4410(int a1, nn__audio__PerformanceInfo *a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // r1
  int result; // r0
  int Entries; // r1
  nn__audio__PerformanceInfo *v9; // r0
  unsigned int *v10; // r10
  int v11; // r5
  int TotalProcessingTime; // r0
  int v13; // r11
  unsigned __int8 *v14; // r6
  int v15; // r9
  int v16; // r1
  __int64 v17; // r2
  unsigned int v18; // r8
  int v19; // r1
  __int64 v20; // r2
  unsigned int v21; // r2
  unsigned int v22; // r5
  unsigned int v23; // lr
  unsigned int *v24; // r8
  unsigned int v25; // r10
  unsigned __int8 *v26; // r6
  int v27; // t1
  int v28; // r7
  int v29; // r3
  int v30; // r6
  unsigned int v31; // r2
  _DWORD *v32; // r0
  _BYTE *v33; // r7
  int v34; // r6
  int v35; // r0
  int SubMixNodeId; // r0
  int v37; // r1
  int v38; // r0
  int v39; // r0
  char *v40; // r0
  char *v41; // r7
  unsigned int v42; // r6
  int v43; // r0
  int i; // r4
  int v46; // [sp+24h] [bp-FFCh]
  unsigned int v47; // [sp+38h] [bp-FE8h]
  int v49; // [sp+40h] [bp-FE0h]
  int v50; // [sp+44h] [bp-FDCh]
  int v51; // [sp+48h] [bp-FD8h]
  unsigned int v52; // [sp+4Ch] [bp-FD4h]
  unsigned int v53; // [sp+4Ch] [bp-FD4h]
  unsigned int v54; // [sp+50h] [bp-FD0h]
  int v55; // [sp+54h] [bp-FCCh] BYREF
  _OWORD v56[7]; // [sp+58h] [bp-FC8h] BYREF
  int v57; // [sp+C8h] [bp-F58h]
  int v58; // [sp+CCh] [bp-F54h]
  int v59; // [sp+D0h] [bp-F50h]
  __int64 v60; // [sp+D8h] [bp-F48h]
  _DWORD v61[964]; // [sp+E0h] [bp-F40h] BYREF
  _QWORD v62[2]; // [sp+FF0h] [bp-30h] BYREF

  v6 = a1 + 616;
  result = FIELD_U32(a1, 620);
  if ( result != v6 )
  {
    v46 = v6;
    memset(v56, 0, sizeof(v56));
    memset(v61, 0, 3088);
    v55 = 0;
    Entries = nn__audio__PerformanceInfo__GetEntries(a2, &v55);
    v9 = a2;
    *(_QWORD *)&v56[6] = 0;
    v10 = (unsigned int *)v62;
    v11 = Entries;
    TotalProcessingTime = nn__audio__PerformanceInfo__GetTotalProcessingTime(v9);
    nn__os__ConvertToTick(v62, 1000, 1000 * TotalProcessingTime, (unsigned __int64)(1000LL * TotalProcessingTime) >> 32);
    *((_QWORD *)&v56[6] + 1) = v62[0];
    *(_QWORD *)&v56[3] = 0;
    v51 = 0;
    v50 = 0;
    if ( v55 >= 1 )
    {
      v13 = 0;
      v49 = v11;
      v50 = 0;
      v51 = 0;
      while ( 1 )
      {
        v14 = (unsigned __int8 *)(v11 + 16 * v13);
        v15 = v11;
        v16 = v14[6] | (v14[7] << 8);
        v17 = 1000LL * (v14[4] | (v14[5] << 8) | (v16 << 16));
        nn__os__ConvertToTick(v62, v16, v17, HIDWORD(v17));
        v18 = *v10;
        v54 = v10[1];
        v19 = v14[8] | (v14[9] << 8) | ((v14[10] | (v14[11] << 8)) << 16);
        v20 = 1000LL * (v19 + (v14[4] | (v14[5] << 8) | ((v14[6] | (v14[7] << 8)) << 16)));
        nn__os__ConvertToTick(v62, v19, v20, HIDWORD(v20));
        v21 = *v10;
        v22 = v10[1];
        switch ( v14[12] )
        {
          case 1u:
            v23 = v18;
            v24 = v10;
            v25 = *v10;
            v27 = v14[8];
            v26 = v14 + 8;
            v28 = v26[2];
            v29 = v26[1];
            v30 = v26[3];
            v31 = v22;
            v11 = v49;
            v61[v50 + 772] = *(unsigned __int8 *)(v15 + 16 * v13)
                           | (*(unsigned __int8 *)(v15 + 16 * v13 + 1) << 8)
                           | ((*(unsigned __int8 *)(v15 + 16 * v13 + 2) | (*(unsigned __int8 *)(v15 + 16 * v13 + 3) << 8)) << 16);
            v32 = &v56[v50++];
            v32[38] = v23;
            v32[39] = v54;
            v32[40] = v25;
            v32[41] = v31;
            v10 = v24;
            v51 += v27 | (v29 << 8) | ((v28 | (v30 << 8)) << 16);
            goto LABEL_26;
          case 2u:
            v52 = *v10;
            v47 = v10[1];
            v33 = sub_608065A0();
            v34 = (unsigned __int8)v33[1401];
            v35 = sub_608B6940((int)v33, 0);
            SubMixNodeId = nn__audio__GetSubMixNodeId(v35 + 44);
            v37 = *(unsigned __int8 *)(v15 + 16 * v13)
                | (*(unsigned __int8 *)(v15 + 16 * v13 + 1) << 8)
                | ((*(unsigned __int8 *)(v15 + 16 * v13 + 2) | (*(unsigned __int8 *)(v15 + 16 * v13 + 3) << 8)) << 16);
            if ( v34 )
            {
              if ( SubMixNodeId == v37 )
              {
LABEL_19:
                v10 = (unsigned int *)v62;
                *(_QWORD *)&v56[1] = __PAIR64__(v54, v18);
                *((_QWORD *)&v56[1] + 1) = __PAIR64__(v22, v52);
              }
              else
              {
                v10 = (unsigned int *)v62;
                if ( v33[1402] )
                {
                  v38 = sub_608B6940((int)v33, 1);
                  v39 = nn__audio__GetSubMixNodeId(v38 + 44);
                  v11 = v49;
                  goto LABEL_24;
                }
              }
              v11 = v49;
              goto LABEL_26;
            }
            if ( SubMixNodeId == v37 )
              goto LABEL_19;
            v10 = (unsigned int *)v62;
            v11 = v49;
            if ( sub_608B69C8((int)v33) >= 2 )
            {
              v43 = sub_608B6940((int)v33, 1);
              v39 = nn__audio__GetSubMixNodeId(v43 + 44);
LABEL_24:
              if ( v39 == (*(unsigned __int8 *)(v11 + 16 * v13)
                         | (*(unsigned __int8 *)(v11 + 16 * v13 + 1) << 8)
                         | ((*(unsigned __int8 *)(v11 + 16 * v13 + 2) | (*(unsigned __int8 *)(v11 + 16 * v13 + 3) << 8)) << 16)) )
              {
                v61[0] = v18;
                v61[1] = v54;
                v61[2] = v52;
                v61[3] = v47;
              }
            }
LABEL_26:
            if ( ++v13 >= v55 )
              goto LABEL_27;
            break;
          case 3u:
            *(_QWORD *)&v56[2] = __PAIR64__(v54, v18);
            *((_QWORD *)&v56[2] + 1) = __PAIR64__(v22, v21);
            v11 = v15;
            goto LABEL_26;
          case 4u:
            v53 = *v10;
            v40 = (char *)sub_608065A0();
            v41 = v40;
            if ( FIELD_U8(a1, 612)
              || nn__audio__GetSinkNodeId(v40 + 1316) != (*(unsigned __int8 *)(v15 + 16 * v13)
                                                        | (*(unsigned __int8 *)(v15 + 16 * v13 + 1) << 8)
                                                        | ((*(unsigned __int8 *)(v15 + 16 * v13 + 2)
                                                          | (*(unsigned __int8 *)(v15 + 16 * v13 + 3) << 8)) << 16)) )
            {
              if ( *((_DWORD *)v41 + 389) )
              {
                v42 = v22;
                v11 = v15;
                if ( nn__audio__GetSinkNodeId_9AE1F8(v41 + 1540) == (*(unsigned __int8 *)(v15 + 16 * v13)
                                                                   | (*(unsigned __int8 *)(v15 + 16 * v13 + 1) << 8)
                                                                   | ((*(unsigned __int8 *)(v15 + 16 * v13 + 2)
                                                                     | (*(unsigned __int8 *)(v15 + 16 * v13 + 3) << 8)) << 16)) )
                {
                  *(_QWORD *)&v56[5] = __PAIR64__(v54, v18);
                  *((_QWORD *)&v56[5] + 1) = __PAIR64__(v42, v53);
                }
              }
              else
              {
                v11 = v15;
              }
            }
            else
            {
              *(_QWORD *)&v56[4] = __PAIR64__(v54, v18);
              *((_QWORD *)&v56[4] + 1) = __PAIR64__(v22, v53);
              v11 = v15;
            }
            goto LABEL_26;
          default:
            v11 = v15;
            goto LABEL_26;
        }
      }
    }
LABEL_27:
    *(_QWORD *)&v56[0] = a3;
    *((_QWORD *)&v56[0] + 1) = a4;
    nn__os__ConvertToTick(v62, v51, 1000 * v51, (unsigned __int64)(1000LL * v51) >> 32);
    *((_QWORD *)&v56[3] + 1) = *(_QWORD *)v10;
    v58 = v50;
    v59 = a5;
    v57 = v50 + a5;
    v60 = *((_QWORD *)&v56[0] + 1) - *(_QWORD *)&v56[0];
    result = a1;
    for ( i = FIELD_U32(a1, 620); i != v46; i = FIELD_U32(i, 4) )
      result = sub_608D2AE8(i, v56);
  }
  return result;
}
