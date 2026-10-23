/* sub_60981480
 * address: 0x60981480   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60981480(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r9
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r4
  int v16; // r6
  int v17; // r11
  int v18; // r0
  int v19; // r4
  int v20; // r4
  int v21; // r0
  int v22; // r0
  _DWORD *v23; // r5
  unsigned int i; // r9
  int (**v25)(); // r0
  unsigned int v26; // r1
  int v27; // r7
  char v28; // r12
  _BOOL4 v29; // r8
  _DWORD *v30; // r4
  int v31; // r0
  int *v32; // r0
  _BYTE *v33; // r0
  _BYTE *v34; // r5
  unsigned int j; // r7
  int v36; // r0
  unsigned int v37; // r1
  int v38; // r0
  int v40; // [sp+Ch] [bp-6Ch]
  int v41; // [sp+10h] [bp-68h]
  int v42; // [sp+14h] [bp-64h]
  int v43; // [sp+18h] [bp-60h] BYREF
  int v44; // [sp+1Ch] [bp-5Ch] BYREF
  int v45; // [sp+20h] [bp-58h]
  int v46; // [sp+24h] [bp-54h]
  int v47; // [sp+28h] [bp-50h] BYREF
  int v48; // [sp+2Ch] [bp-4Ch] BYREF
  int (**v49)(); // [sp+30h] [bp-48h] BYREF
  int v50; // [sp+34h] [bp-44h]

  v7 = a7;
  v12 = sub_6098E28C(FIELD_U32(a7, 64), "LocalizeReplaceTarget");
  v13 = v12;
  if ( v12 )
  {
    v41 = a2;
    v42 = a4;
    v48 = 0;
    v47 = 0;
    v14 = v12 + FIELD_U32(v12, 4);
    v49 = &sead__SafeStringBase__vtable;
    v50 = v14;
    if ( sub_608FD324(&v48, &v49) == 1 )
    {
      v15 = v48;
      v46 = sub_608FD200();
      if ( v15 != v46 )
        return 0;
    }
    else
    {
      v18 = v13 + FIELD_U32(v13, 4);
      v49 = &sead__SafeStringBase__vtable;
      v50 = v18;
      if ( sub_608FC978(&v47, &v49) != 1 )
        return 0;
      v19 = v47;
      v45 = sub_608FD248();
      if ( v19 != v45 )
        return 0;
    }
    v20 = a3;
    v17 = sub_6098E28C(FIELD_U32(a7, 64), "LocalizeReplaceOn");
    v21 = FIELD_U32(a7, 52);
    v16 = 0;
    if ( v21 )
    {
      v40 = 1;
      v22 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v21 + 48))(v21, v17 + FIELD_U32(v17, 4), 1);
      v23 = (_DWORD *)v22;
      if ( v22 )
      {
        if ( !sub_6097D588(v22) )
          v40 = sub_6097D6F4((int)v23);
        v16 = (*(int (__fastcall **)(_DWORD *))(*v23 + 40))(v23);
        if ( v16 )
        {
          for ( i = 0; i != v16; ++i )
          {
            v25 = *(int (***)())((*(int (__fastcall **)(_DWORD *, unsigned int))(*v23 + 44))(v23, i) + 28);
            v26 = 0;
            if ( i < 9 )
              v26 = i;
            (&v49)[v26] = v25;
          }
        }
        (*(void (__fastcall **)(_DWORD *, int))(*v23 + 12))(v23, v20);
        v7 = a7;
        sub_60858A34(FIELD_U32(a7, 52), v23);
        (*(void (__fastcall **)(_DWORD *))(*v23 + 4))(v23);
        v27 = sub_609908C0();
        if ( ((unsigned int)&dword_60CCEE80 & ~(1620579968 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEE80) )
        {
          dword_60CCEE7C = (int)&off_60C5C940;
          _cxa_guard_release(&dword_60CCEE80);
        }
        v29 = 0;
        v30 = 0;
        if ( v27 )
        {
          v30 = (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)v27 + 8))(v27, &dword_60CCEE7C);
          if ( v30 )
            v30 = (_DWORD *)v27;
        }
        if ( a1[18] )
          v29 = sub_6098BE18() != 0;
        if ( !(v40 | (v30 == 0 || v29)) )
        {
          v31 = v30[31];
          v44 = v30[32];
          v43 = v31;
          v32 = &v43;
          if ( v30[20] != 1 )
            v32 = &v44;
          *v32 = (int)v23;
          sub_608F8E10((int)v30, &v43);
        }
      }
    }
    a4 = v42;
    a2 = v41;
  }
  else
  {
    v16 = 0;
    v17 = 0;
  }
  v33 = (_BYTE *)(*(int (__fastcall **)(_DWORD *, int, int, int, int, int))(*a1 + 92))(a1, a2, a4, a5, a6, v7);
  v34 = v33;
  if ( v17 )
  {
    sub_608580EC(v33, (unsigned __int8 *)(v17 + FIELD_U32(v17, 4)));
    if ( v16 >= 1 )
    {
      for ( j = 0; j != v16; ++j )
      {
        v36 = (*(int (__fastcall **)(_BYTE *, unsigned int))(*(_DWORD *)v34 + 44))(v34, j);
        v37 = 0;
        if ( j < 9 )
          v37 = j;
        FIELD_U32(v36, 28) = (&v49)[v37];
      }
    }
  }
  (*(void (__fastcall **)(_DWORD *, _BYTE *, int))(*a1 + 96))(a1, v34, v7);
  v38 = a1[18];
  if ( v38 )
    (*(void (__fastcall **)(int, _BYTE *, _DWORD *, int))(*(_DWORD *)v38 + 40))(v38, v34, a1, v7);
  return v34;
}
