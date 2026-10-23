/* sub_608F4134
 * address: 0x608F4134   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4134(
        int a1,
        int a2,
        int a3,
        __int64 *a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int (__fastcall ***a11)(_DWORD, int *),
        int *a12,
        _DWORD *a13)
{
  int result; // r0
  __int64 v18; // r0
  unsigned int *v19; // r2
  unsigned int v20; // r3
  unsigned int v21; // r2
  int v22; // r0
  _QWORD *v23; // r1
  _QWORD *v24; // r7
  __int64 v25; // d16
  __int64 v26; // d17
  bool v27; // zf
  int v28; // r4
  int v29; // r2
  _QWORD *v30; // r0
  __int64 v31; // d17
  __int64 v32; // d17
  int v33; // r1
  int v34; // r3
  int v35; // r5
  int v36; // r1
  int v37; // r3
  int v38; // r5
  int v39; // r0
  int v40; // r1
  int v41; // r7
  unsigned int v42; // r0
  unsigned int v43; // r1
  _QWORD *v44; // r5
  _QWORD *v45; // r7
  __int64 v46; // d16
  __int64 v47; // d17
  int v48; // r4
  int v49; // r0
  _DWORD *v50; // r12
  __int64 v51; // d17
  __int64 v52; // d17
  _QWORD *v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r7
  int v57; // r2
  int v58; // r3
  int v59; // r7
  __int64 v60; // r0
  int v61; // r5
  __int64 v62; // r0
  __int64 v63; // r10
  char v64; // r12
  int v65; // r6
  int v66; // r4
  int v67; // r5
  __int64 v68; // r0
  __int64 v69; // r0
  int v70; // [sp+10h] [bp-28h]

  result = FIELD_U8(a1, 1968);
  if ( !result )
  {
    v18 = dword_60CC746C(a7);
    dword_60CC781C(a2, 0, v18, HIDWORD(v18), 36 * a8);
    v19 = (unsigned int *)(a1 + 1956);
    if ( FIELD_U8(a1, 1969) )
    {
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 + 512, v19) );
      v21 = FIELD_U32(a1, 1964);
      if ( v20 + 512 - FIELD_U32(a1, 1960) <= v21 )
      {
        v22 = FIELD_U32(a1, 1952);
        v23 = a4 + 4;
        v25 = *a4;
        v26 = a4[1];
        v24 = a4 + 2;
        v27 = a12 == 0;
        if ( a12 )
          v27 = a13 == 0;
        v28 = v20 % v21;
        v29 = v22 + v28;
        *(_QWORD *)v29 = v25;
        FIELD_U64(v29, 8) = v26;
        v30 = (_QWORD *)(v22 + v28 + 16);
        v31 = v24[1];
        *v30 = *v24;
        v30[1] = v31;
        v32 = v23[1];
        FIELD_U64(v29, 32) = *v23;
        FIELD_U64(v29, 40) = v32;
        FIELD_U64(v29, 48) = 0;
        FIELD_U64(v29, 56) = 0x3F80000000000000LL;
        v33 = a5[1];
        v34 = a5[2];
        v35 = a5[3];
        FIELD_U32(v29, 64) = *a5;
        FIELD_U32(v29, 68) = v33;
        FIELD_U32(v29, 72) = v34;
        FIELD_U32(v29, 76) = v35;
        v36 = a6[1];
        v37 = a6[2];
        v38 = a6[3];
        FIELD_U32(v29, 80) = *a6;
        FIELD_U32(v29, 84) = v36;
        FIELD_U32(v29, 88) = v37;
        FIELD_U32(v29, 92) = v38;
        if ( v27 )
        {
          FIELD_U32(v29, 96) = 0;
          FIELD_U32(v29, 100) = 0;
          FIELD_U32(v29, 104) = 0;
          FIELD_U32(v29, 108) = 0;
        }
        else
        {
          v39 = *a12;
          v40 = a12[1];
          v41 = a13[1];
          FIELD_U32(v29, 96) = *a13;
          FIELD_U32(v29, 100) = v41;
          FIELD_U32(v29, 104) = v39;
          FIELD_U32(v29, 108) = v40;
        }
        v61 = a1 + 1904;
        v62 = dword_60CC746C(a1 + 1904);
        LODWORD(v63) = 0;
        dword_60CC7824(a2, 0, 1, dword_60CC7824, v62 + v28, (v62 + (unsigned __int64)(unsigned int)v28) >> 32, 256);
        v65 = FIELD_U32(a1, 1952);
        v66 = v28 + 256;
        if ( a11 )
        {
          v70 = v61;
          if ( ((unsigned int)&dword_60CCEC44 & ~(1620001744 << v64) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEC44) )
          {
            dword_60CCEC40 = (int)&off_60C5C874;
            _cxa_guard_release(&dword_60CCEC44);
          }
          v67 = (int)(a11 + 4);
          if ( !(**a11)(a11, &dword_60CCEC40) )
            v67 = 16;
          v63 = *(_QWORD *)v67;
          v61 = v70;
        }
        else
        {
          HIDWORD(v63) = 0;
        }
        *(_QWORD *)(v66 + v65) = v63;
        v68 = dword_60CC746C(v61);
        dword_60CC7824(a2, 1, 0, dword_60CC7824, v68 + v66, (unsigned __int64)(v68 + v66) >> 32, 8);
        goto LABEL_23;
      }
    }
    else
    {
      do
        v42 = __ldrex(v19);
      while ( __strex(v42 + 256, v19) );
      v43 = FIELD_U32(a1, 1964);
      if ( v42 + 256 - FIELD_U32(a1, 1960) <= v43 )
      {
        v44 = a4 + 4;
        v46 = *a4;
        v47 = a4[1];
        v45 = a4 + 2;
        v48 = v42 % v43;
        v49 = FIELD_U32(a1, 1952) + v42 % v43;
        v50 = (_DWORD *)(v49 + 64);
        *(_QWORD *)v49 = v46;
        FIELD_U64(v49, 8) = v47;
        v51 = v45[1];
        FIELD_U64(v49, 16) = *v45;
        FIELD_U64(v49, 24) = v51;
        v52 = v44[1];
        FIELD_U64(v49, 32) = *v44;
        FIELD_U64(v49, 40) = v52;
        v53 = (_QWORD *)(v49 + 48);
        v49 += 80;
        *v53 = 0;
        v53[1] = 0x3F80000000000000LL;
        v54 = a5[1];
        v55 = a5[2];
        v56 = a5[3];
        *v50 = *a5;
        v50[1] = v54;
        v50[2] = v55;
        v50[3] = v56;
        v57 = a6[1];
        v58 = a6[2];
        v59 = a6[3];
        *(_DWORD *)v49 = *a6;
        FIELD_U32(v49, 4) = v57;
        FIELD_U32(v49, 8) = v58;
        FIELD_U32(v49, 12) = v59;
        v60 = dword_60CC746C(a1 + 1904);
        dword_60CC7824(a2, 0, 1, dword_60CC7824, v60 + v48, (v60 + (unsigned __int64)(unsigned int)v48) >> 32, 96);
LABEL_23:
        v69 = dword_60CC746C(a9);
        return dword_60CC7874(a2, a3, 1, a10, v69, HIDWORD(v69));
      }
    }
    FIELD_U8(a1, 1968) = 1;
    return 1;
  }
  return result;
}
