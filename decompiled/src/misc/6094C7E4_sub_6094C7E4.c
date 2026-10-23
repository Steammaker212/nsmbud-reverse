/* sub_6094C7E4
 * address: 0x6094C7E4   size: 1420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094C7E4(_DWORD *a1, unsigned int a2, unsigned int a3, int a4, float a5, float a6, int a7, int a8)
{
  unsigned int v8; // r7
  int v12; // r11
  _DWORD *v15; // r8
  _DWORD *v16; // r5
  int v17; // r9
  int v18; // r8
  int v19; // r1
  _DWORD *v20; // r5
  int v21; // r6
  _DWORD *v22; // r4
  int v23; // r1
  int v24; // r2
  int v25; // r0
  int v26; // r11
  unsigned int v27; // r4
  int v28; // r3
  __int16 v29; // r6
  _WORD *v30; // r5
  unsigned int v31; // lr
  unsigned int v32; // r12
  int v33; // r4
  unsigned int v34; // r8
  __int16 v35; // r7
  unsigned int i; // r2
  int result; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  _DWORD *v41; // [sp+10h] [bp-A0h]
  int v42; // [sp+14h] [bp-9Ch]
  _DWORD *v43; // [sp+18h] [bp-98h]
  _DWORD *v44; // [sp+1Ch] [bp-94h]
  int v45; // [sp+20h] [bp-90h]
  int v46; // [sp+24h] [bp-8Ch] BYREF
  int v47; // [sp+28h] [bp-88h]
  int v48; // [sp+2Ch] [bp-84h]
  _DWORD v49[3]; // [sp+30h] [bp-80h] BYREF
  _DWORD v50[3]; // [sp+3Ch] [bp-74h] BYREF
  _DWORD v51[3]; // [sp+48h] [bp-68h] BYREF
  _DWORD v52[3]; // [sp+54h] [bp-5Ch] BYREF
  int v53[3]; // [sp+60h] [bp-50h] BYREF
  int v54; // [sp+6Ch] [bp-44h] BYREF
  int v55; // [sp+70h] [bp-40h]
  int v56; // [sp+74h] [bp-3Ch]

  v8 = a3;
  v12 = 0;
  sub_60913D88((int)(a1 + 2192), 32 * a2 * (a3 + 1), a4, 4, 0);
  sub_60913A6C(v53, (int)(a1 + 2192), 0);
  sub_60913A6C(v52, (int)(a1 + 2192), 0);
  ((void (__fastcall *)(_DWORD *, _DWORD *, unsigned int, unsigned int, float, float, int, int))loc_6094FD38)(
    a1 + 2242,
    v52,
    a2,
    v8,
    a5,
    a6,
    a7,
    a8);
  sub_60913D88((int)(a1 + 2199), 12 * v8 * a2, a4, 4, 0);
  sub_60913A6C(v51, (int)(a1 + 2199), 0);
  sub_60913A6C(v50, (int)(a1 + 2199), 0);
  sub_609503B0(a1 + 2310, v50, a2, v8, 0, 0);
  sub_60913D88((int)(a1 + 2206), 12 * (v8 >> 1) * (a2 >> 1), a4, 4, 0);
  sub_60913A6C(v51, (int)(a1 + 2206), 0);
  sub_60913A6C(v50, (int)(a1 + 2206), 0);
  sub_609503B0(a1 + 2330, v50, a2, v8, 0, 1);
  sub_60913D88((int)(a1 + 2213), 12 * (v8 >> 2) * (a2 >> 2), a4, 4, 0);
  v15 = a1;
  sub_60913A6C(v51, (int)(a1 + 2213), 0);
  sub_60913A6C(v50, (int)(a1 + 2213), 0);
  sub_609503B0(a1 + 2350, v50, a2, v8, 0, 2);
  if ( v8 )
  {
    v42 = a4;
    v41 = a1;
    do
    {
      v16 = v15;
      v17 = 0;
      v18 = (int)&v15[7 * v12 + 2220];
      sub_60913D88(v18, 8 * (v8 >> v12) * (a2 >> v12), v42, 4, 0);
      sub_60913A6C(v49, v18, 0);
      v19 = v18;
      v15 = v16;
      sub_60913A6C(&v46, v19, 0);
      v20 = &v16[20 * v12];
      if ( v46 )
        v17 = ((int (*)(void))dword_60CC73E8)();
      v21 = v47;
      v22 = v20 + 2370;
      v23 = 1 << v12;
      if ( a2 )
      {
        v24 = a2 * v23;
        v43 = v20 + 2370;
        v44 = &v15[20 * v12];
        v45 = v12;
        v25 = v17 + v47 + 4;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        do
        {
          v29 = v27 * a2;
          v30 = (_WORD *)(v25 + 2 * v28);
          v31 = v27 + v23;
          v32 = v8;
          v33 = v26;
          v34 = 0;
          do
          {
            v34 += v23;
            *(v30 - 2) = v33;
            v28 += 4;
            *(v30 - 1) = v34 % a2 + v29;
            v35 = v24 + v33;
            *v30 = v33;
            v33 += v23;
            v30[1] = v35;
            v30 += 4;
          }
          while ( v34 < a2 );
          v8 = v32;
          v26 += v24;
          v27 = v31;
        }
        while ( v31 < v32 );
        v21 = v47;
        v15 = v41;
        v22 = v43;
        v20 = v44;
        v12 = v45;
      }
      else
      {
        v28 = 0;
        for ( i = 0; i < v8; i += v23 )
          ;
      }
      v54 = v46;
      v55 = v21;
      v56 = v48;
      sub_60919D48(v22, &v54, 1, v28);
      ++v12;
      result = 1;
      v20[2372] = 1;
    }
    while ( v12 != 3 );
  }
  else
  {
    sub_60913D88((int)(a1 + 2220), 0, a4, 4, 0);
    sub_60913A6C(v49, (int)(a1 + 2220), 0);
    sub_60913A6C(&v46, (int)(a1 + 2220), 0);
    v38 = v46;
    if ( v46 )
    {
      dword_60CC73E8(v46);
      v38 = v46;
    }
    v54 = v38;
    v55 = v47;
    v56 = v48;
    sub_60919D48(a1 + 2370, &v54, 1, 0);
    a1[2372] = 1;
    sub_60913D88((int)(a1 + 2227), 0, a4, 4, 0);
    sub_60913A6C(v49, (int)(a1 + 2227), 0);
    sub_60913A6C(&v46, (int)(a1 + 2227), 0);
    v39 = v46;
    if ( v46 )
    {
      dword_60CC73E8(v46);
      v39 = v46;
    }
    v54 = v39;
    v55 = v47;
    v56 = v48;
    sub_60919D48(a1 + 2390, &v54, 1, 0);
    a1[2392] = 1;
    sub_60913D88((int)(a1 + 2234), 0, a4, 4, 0);
    sub_60913A6C(v49, (int)(a1 + 2234), 0);
    sub_60913A6C(&v46, (int)(a1 + 2234), 0);
    v40 = v46;
    if ( v46 )
    {
      dword_60CC73E8(v46);
      v40 = v46;
    }
    v54 = v40;
    v55 = v47;
    v56 = v48;
    sub_60919D48(a1 + 2410, &v54, 1, 0);
    a1[2412] = 1;
    return 9648;
  }
  return result;
}
