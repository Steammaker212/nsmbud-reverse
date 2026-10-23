/* sub_6078E940
 * address: 0x6078E940   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6078E940(int a1, int *a2)
{
  char v2; // r12
  int v4; // r10
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r11
  int *v8; // r0
  int *v9; // r8
  int v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // r5
  int v14; // r4
  int v15; // r7
  int v16; // r0
  int v17; // r6
  int v18; // r2
  int v19; // r1
  int v20; // r0
  int v21; // r6
  int v22; // r5
  int v23; // r4
  int v24; // r7
  int v25; // r0
  int v26; // [sp+4h] [bp-3Ch]
  int v27; // [sp+Ch] [bp-34h]
  int *v28; // [sp+10h] [bp-30h]
  int (**v29)(); // [sp+14h] [bp-2Ch] BYREF
  int v30; // [sp+18h] [bp-28h]

  v4 = *a2;
  if ( ((unsigned int)&dword_60C80400 & ~(1618536800 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C803FC) == 1 && FIELD_U32(v4, 40) )
  {
    v26 = a1;
    v5 = 1;
    v6 = FIELD_U32(a1, 536);
    if ( (v6 & 2) == 0 )
      v5 = (v6 >> 1) & 2;
    v27 = FIELD_U16(v4, 64);
    if ( FIELD_U16(v4, 64) )
    {
      v7 = 0;
      v8 = &dword_60CC47D0[2 * v5];
      v9 = v8 + 13;
      v28 = v8 + 14;
      do
      {
        v10 = FIELD_U32(v4, 440);
        v11 = *(_DWORD *)(FIELD_U32(v10, 16) + 3016 * v7 + 24);
        v12 = sub_60431E14(v10);
        v13 = v12;
        if ( v11 )
        {
          v14 = sub_60918390(v12);
          if ( v14 >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              v16 = sub_60918238(v13, v15);
              v29 = &sead__SafeStringBase__vtable;
              v30 = v16;
              (*(void (__fastcall **)(int *))(*v9 + 12))(v9);
              (*(void (__fastcall **)(int *))(*v9 + 12))(v9);
              v17 = *v28;
              ((void (__fastcall *)(int (***)()))v29[3])(&v29);
              if ( v17 == v30 )
                break;
              v18 = 1;
              v19 = *v28;
              while ( *(unsigned __int8 *)(v19 + v18 - 1) == *(unsigned __int8 *)(v30 + v18 - 1) )
              {
                if ( !*(_BYTE *)(v19 + v18 - 1) )
                  goto LABEL_25;
                if ( v18 > 0x80000 || *(unsigned __int8 *)(v19 + v18) != *(unsigned __int8 *)(v30 + v18) )
                  break;
                if ( !*(_BYTE *)(v19 + v18) )
                  goto LABEL_25;
                v18 += 2;
              }
              if ( ++v15 >= v14 )
                goto LABEL_28;
            }
LABEL_25:
            v20 = sub_609184C4(v13);
            v21 = FIELD_U16(v4, 66);
            v22 = v20;
            if ( FIELD_U16(v4, 66) )
            {
              v23 = 0;
              do
              {
                v24 = FIELD_U32(v4, 76) + v23;
                sub_609186E8(v24, 2);
                sub_6091872C(v24, 2, v22);
                v23 += 72;
                --v21;
              }
              while ( v21 );
            }
          }
        }
LABEL_28:
        ++v7;
      }
      while ( v7 != v27 );
    }
    v25 = dword_60C9BBD4;
    FIELD_U8(dword_60C9BBD4, 18064) = FIELD_U8(v26, 540);
    sub_60427A10(v25, v4, 1);
    FIELD_U8(dword_60C9BBD4, 18064) = 1;
  }
}
