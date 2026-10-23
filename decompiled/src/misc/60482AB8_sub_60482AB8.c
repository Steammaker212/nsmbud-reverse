/* sub_60482AB8
 * address: 0x60482AB8   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60482AB8(_DWORD *a1)
{
  _DWORD *v2; // r10
  const char *v3; // r5
  int result; // r0
  int v5; // r7
  char v6; // r12
  int v7; // r9
  int *v8; // r0
  int v9; // r0
  int v10; // r8
  bool v11; // zf
  signed int v12; // r6
  signed int *v13; // r11
  unsigned int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r7
  int v17; // r5
  int v18; // r0
  _DWORD *v19; // r9
  int v20; // r0
  int v21; // r10
  bool v22; // zf
  signed int v23; // r7
  int v24; // r6
  int v25; // r5
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int (**v31)(); // [sp+8h] [bp-78h] BYREF
  const char *v32; // [sp+Ch] [bp-74h]
  int v33; // [sp+10h] [bp-70h]
  int v34; // [sp+14h] [bp-6Ch] BYREF

  a1[2620] = 14;
  v2 = a1 + 835;
  sub_604734E4(a1 + 835, 0);
  sub_60475C8C((int)v2);
  v32 = (const char *)&v34;
  v31 = &BufferedSafeStringBase_char_vtable_probably;
  v33 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v31);
  *v32 = 0;
  v31 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60C9EFEC + 12))(&dword_60C9EFEC);
  v3 = (const char *)dword_60C9EFF0;
  (*(void (__fastcall **)(int *))(dword_60C9EFF4 + 12))(&dword_60C9EFF4);
  sub_608FDDF4((int)&v31, "%s.%s", v3, (const char *)dword_60C9EFF8);
  message_ref(v2, &v31, 0, 0, 0);
  result = a1[839];
  if ( result )
  {
    v31 = &sead__SafeStringBase__vtable;
    v32 = "Pa_Clear_00";
    sub_605040B4(a1 + 1724, v2, &v31);
    v5 = sub_60504564(a1 + 1724, "N_ChallengeClear_00");
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1615342604 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    v7 = 0;
    if ( v5 )
    {
      v8 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( v8 )
      {
        while ( v8 != &dword_60C9D9D0 )
        {
          v8 = (int *)*v8;
          if ( !v8 )
            goto LABEL_11;
        }
        v7 = v5;
      }
    }
LABEL_11:
    v9 = sub_60504564(a1 + 1724, "T_ChallengeClear_00");
    result = sub_604749C4(v9);
    v10 = result;
    v11 = v7 == 0;
    if ( v7 )
      v11 = result == 0;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 16))(a1, result);
      v12 = a1[820];
      v13 = a1 + 1722;
      if ( v12 >= 1 )
      {
        v14 = 3584 * v12 + 8;
        if ( v14 < 3584 * v12 )
          v14 = -1;
        if ( !is_mul_ok(0xE00u, v12) )
          v14 = -1;
        v15 = (_DWORD *)sub_608DE334(v14, 0, 4);
        if ( v15 )
        {
          *v15 = 3584;
          v15[1] = v12;
          v16 = v15 + 2;
          v17 = 3584 * v12;
          v18 = (int)(v15 + 2);
          do
          {
            v17 -= 3584;
            v18 = sub_60503FB0(v18) + 3584;
          }
          while ( v17 );
          *v13 = v12;
          a1[1723] = v16;
        }
      }
      sub_60472960((int)a1, v10, v7);
      v19 = (_DWORD *)sub_6085768C(a1[839], "Pa_Clear_00");
      v20 = sub_60473B4C((int)v2);
      v21 = v20;
      v22 = v19 == 0;
      if ( v19 )
        v22 = v20 == 0;
      if ( !v22 )
      {
        v23 = *v13;
        if ( *v13 )
        {
          v24 = a1[1723];
          do
          {
            v25 = sub_6098F408(v19, a1[839], 0);
            sub_608589FC(v21, v25);
            v26 = sub_60482EC0(v25);
            sub_60504234(v24, FIELD_U32(v26, 180));
            v27 = sub_60504564(v24, "T_ChallengeClear_00");
            v28 = sub_604749C4(v27);
            v29 = a1[821];
            if ( v29 )
            {
              v30 = a1[819];
              if ( v30 < a1[820] )
              {
                *(_DWORD *)(v29 + 4 * v30) = v28;
                ++a1[819];
              }
            }
            --v23;
            v24 += 3584;
          }
          while ( v23 );
        }
        sub_604729C4((int)a1, v10);
      }
      v31 = &sead__SafeStringBase__vtable;
      v32 = "PaChallengeClear";
      sub_604721C8((int)a1, (const char **)&v31, dword_60CC7F90);
      return ((int (__fastcall *)(_DWORD *))loc_60472644)(a1);
    }
  }
  return result;
}
