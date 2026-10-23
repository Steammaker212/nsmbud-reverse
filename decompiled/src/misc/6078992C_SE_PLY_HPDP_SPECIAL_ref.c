/* SE_PLY_HPDP_SPECIAL_ref
 * address: 0x6078992C   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_HPDP_SPECIAL_ref(int a1)
{
  int v1; // r6
  char v2; // r12
  int v4; // r5
  int v5; // r0
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  int v13; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  int v20; // r0
  bool v21; // zf
  int v22; // r0
  int v23; // r0

  v4 = 0;
  v5 = FIELD_U32(a1, 180);
  if ( v5 )
  {
    if ( v5 == 4 )
      goto LABEL_59;
    v6 = (FIELD_U8(a1, 66) & 1) == 0;
    if ( (FIELD_U8(a1, 66) & 1) != 0 )
    {
      v1 = FIELD_U32(a1, 32);
      v6 = v1 == 0;
    }
    if ( v6 )
      goto LABEL_60;
    v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 636))(v1);
    if ( v13 == 1
      && ((*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 3)
       || (*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 5)) )
    {
      goto LABEL_60;
    }
    v14 = FIELD_U32(a1, 32);
    v15 = v14 == 0;
    if ( v14 )
      v15 = FIELD_U32(v14, 13056) == 0;
    if ( v15 )
    {
LABEL_60:
      v7 = (FIELD_U8(a1, 66) & 2) == 0;
      if ( (FIELD_U8(a1, 66) & 2) != 0 )
      {
        v1 = FIELD_U32(a1, 36);
        v7 = v1 == 0;
      }
      if ( v7 )
        goto LABEL_61;
      v16 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 636))(v1);
      if ( v16 == 1
        && ((*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 3)
         || (*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 5)) )
      {
        goto LABEL_61;
      }
      v17 = FIELD_U32(a1, 36);
      v18 = v17 == 0;
      if ( v17 )
        v18 = FIELD_U32(v17, 13056) == 0;
      if ( v18 )
      {
LABEL_61:
        v8 = (FIELD_U8(a1, 66) & 4) == 0;
        if ( (FIELD_U8(a1, 66) & 4) != 0 )
        {
          v1 = FIELD_U32(a1, 40);
          v8 = v1 == 0;
        }
        if ( v8 )
          goto LABEL_62;
        v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 636))(v1);
        if ( v19 == 1
          && ((*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 3)
           || (*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 5)) )
        {
          goto LABEL_62;
        }
        v20 = FIELD_U32(a1, 40);
        v21 = v20 == 0;
        if ( v20 )
          v21 = FIELD_U32(v20, 13056) == 0;
        if ( v21 )
        {
LABEL_62:
          v9 = (FIELD_U8(a1, 66) & 8) == 0;
          if ( (FIELD_U8(a1, 66) & 8) != 0 )
          {
            v1 = FIELD_U32(a1, 44);
            v9 = v1 == 0;
          }
          if ( v9
            || (v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 636))(v1),
                v22 == 1
             && ((*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 3)
              || (*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 5)))
            || (v23 = FIELD_U32(a1, 44)) == 0
            || !FIELD_U32(v23, 13056) )
          {
LABEL_59:
            if ( !FIELD_U8(dword_60C9A230, 2084) )
            {
              if ( ((unsigned int)&unk_60CC4370 & ~(1618516420 << v2) & 1) == 0
                && _cxa_guard_acquire((__guard *)&unk_60CC4370) )
              {
                dword_60CC4374 = (int)"SE_PLY_HPDP_SPECIAL_TWO";
                dword_60CC4378 = (int)"SE_PLY_HPDP_SPECIAL_THREE";
                dword_60CC437C = (int)"SE_PLY_HPDP_SPECIAL_FOUR";
                _cxa_guard_release((__guard *)&unk_60CC4370);
              }
              v10 = FIELD_U32(a1, 180);
              v11 = v10 - 1;
              if ( v10 - 1 >= 2 )
                v11 = 2;
              if ( v10 < 1 )
                v11 = 0;
              sub_60807EF0(SoundSystem_instance, *((_DWORD *)&unk_60CC4370 + v11 + 1), 0, 1);
            }
            v4 = 1;
            FIELD_U32(a1, 180) = 0;
          }
        }
      }
    }
  }
  return v4;
}
