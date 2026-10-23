/* MultiFilterColorCorrection_ref
 * address: 0x609A94E4   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MultiFilterColorCorrection_ref(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r7
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r9
  int v11; // r4
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int v14; // r8
  _WORD *v15; // r4
  int v16; // r10
  int v17; // r3
  int v18; // r5
  int v19; // r6
  int v20; // r7
  int v21; // r3
  int v22; // r5
  int v23; // r6
  int v24; // r7
  int v25; // r3
  int v26; // r5
  int v27; // r6
  int v28; // r7
  __int16 v29; // r2
  unsigned int *v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // r1
  unsigned int v33; // r1
  int v34; // r4
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  unsigned int *v39; // r0
  unsigned int v40; // r1
  int v41; // [sp+4h] [bp-74h]
  int v42; // [sp+1Ch] [bp-5Ch]
  int v43; // [sp+20h] [bp-58h]
  int v44; // [sp+28h] [bp-50h]
  int v45; // [sp+2Ch] [bp-4Ch]
  int v46; // [sp+30h] [bp-48h]
  int v47; // [sp+34h] [bp-44h]
  int v48; // [sp+38h] [bp-40h]
  _DWORD v49[15]; // [sp+3Ch] [bp-3Ch] BYREF

  result = FIELD_U32(a1, 148);
  if ( result )
  {
    v7 = FIELD_U32(a3, 4);
    v48 = v7;
    if ( !v7 )
      v7 = *(_DWORD *)a3;
    v42 = a3 + 16;
    sub_60920EC8(a3 + 16, (int *)v7);
    v8 = FIELD_U16(v7, 24);
    if ( v8 <= 1 )
      v8 = 1;
    v9 = sub_609200A0(v7);
    v10 = FIELD_U16(v7, 26);
    if ( v9 > v10 )
      v10 = v9;
    v11 = dword_60CD09F8;
    TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
    if ( TlsValue )
      CurrentCoreNumber = TlsValue - 1;
    else
      CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
    v49[0] = CurrentCoreNumber;
    if ( (*(_DWORD *)(v11 + 608 * CurrentCoreNumber + 624) & 1) == 0 )
      sub_609ABAC0(FIELD_U32(a1, 148), a2);
    v47 = a1;
    v49[0] = &sead__SafeStringBase__vtable;
    v49[1] = "MultiFilterColorCorrection";
    v46 = v8;
    v43 = a2;
    v14 = sub_609ACEBC(a3 + 776, a2, v49, FIELD_U32(a3, 8), v8, v10);
    FIELD_U32(a3, 4) = v14;
    v15 = (_WORD *)(a3 + 700);
    v16 = FIELD_U16(a3, 700);
    v44 = FIELD_U8(a3, 702);
    v45 = a3 + 424;
    v17 = FIELD_U32(v14, 4);
    v18 = FIELD_U32(v14, 8);
    v19 = FIELD_U32(v14, 12);
    v20 = FIELD_U32(v14, 16);
    FIELD_U32(a3, 424) = *(_DWORD *)v14;
    FIELD_U32(a3, 428) = v17;
    FIELD_U32(a3, 432) = v18;
    FIELD_U32(a3, 436) = v19;
    FIELD_U32(a3, 440) = v20;
    v21 = FIELD_U32(v14, 24);
    v22 = FIELD_U32(v14, 28);
    v23 = FIELD_U32(v14, 32);
    v24 = FIELD_U32(v14, 36);
    FIELD_U32(a3, 444) = FIELD_U32(v14, 20);
    FIELD_U32(a3, 448) = v21;
    FIELD_U32(a3, 452) = v22;
    FIELD_U32(a3, 456) = v23;
    FIELD_U32(a3, 460) = v24;
    v25 = FIELD_U32(v14, 44);
    v26 = FIELD_U32(v14, 48);
    v27 = FIELD_U32(v14, 52);
    v28 = FIELD_U32(v14, 56);
    FIELD_U32(a3, 464) = FIELD_U32(v14, 40);
    FIELD_U32(a3, 468) = v25;
    FIELD_U32(a3, 472) = v26;
    FIELD_U32(a3, 476) = v27;
    FIELD_U32(a3, 480) = v28;
    v29 = FIELD_U16(v14, 60);
    FIELD_U8(a3, 486) = FIELD_U8(v14, 62);
    FIELD_U16(a3, 484) = v29;
    sub_60917754(a3 + 488, v14 + 64);
    FIELD_U32(a3, 688) = FIELD_U32(v14, 264);
    v30 = (unsigned int *)(a3 + 696);
    do
      v31 = __ldrex(v30);
    while ( __strex(v31 | 4, v30) );
    if ( (unsigned __int16)*v15 != v16 )
    {
      do
        v32 = __ldrex(v30);
      while ( __strex(v32 | 2, v30) );
      *v15 = v16;
    }
    if ( FIELD_U8(a3, 702) != v44 )
    {
      do
        v33 = __ldrex(v30);
      while ( __strex(v33 | 1, v30) );
      FIELD_U8(a3, 702) = v44;
    }
    sub_6091AC94(v45);
    FIELD_U32(a3, 372) = 0;
    FIELD_U32(a3, 376) = 0;
    FIELD_F32(a3, 380) = (float)v46;
    FIELD_F32(a3, 384) = (float)v10;
    FIELD_F32(a3, 364) = (float)v46;
    FIELD_F32(a3, 368) = (float)v10;
    v34 = dword_60CD09F8;
    v35 = nn__os__GetTlsValue(dword_60CCFC58);
    if ( v35 )
      v36 = v35 - 1;
    else
      v36 = nn__os__GetCurrentCoreNumber(0);
    v49[0] = v36;
    if ( (*(_DWORD *)(v34 + 608 * v36 + 624) & 1) == 0 )
    {
      sub_6090B260(a3 + 360);
      v37 = ((int (__fastcall *)(_DWORD *, int))loc_6090E438)(v49, a3 + 360);
      sub_6090E560(v37, v43, (float *)(a3 + 360));
      sub_609AC174(FIELD_U32(v47, 148), v43, 0, a3 + 360, v42, v41, 1, 0, 0, 1);
      sub_6091ADF4(v45, v43);
    }
    if ( v48 )
      sub_609ACF6C(a3 + 776);
    result = FIELD_U8(a3, 772);
    if ( FIELD_U8(a3, 772) )
    {
      v38 = FIELD_U32(a3, 768);
      FIELD_U8(a3, 340) = 2;
      FIELD_U8(a3, 341) = 3;
      FIELD_U8(a3, 342) = 4;
      FIELD_U8(a3, 343) = v38;
      FIELD_U8(a3, 348) |= 2u;
      v39 = (unsigned int *)(a3 + 344);
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 | 1, v39) );
      FIELD_U8(a3, 772) = 0;
      return 0;
    }
  }
  return result;
}
