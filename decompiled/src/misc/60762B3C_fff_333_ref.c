/* fff_333_ref
 * address: 0x60762B3C   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fff_333_ref(int a1)
{
  int v2; // r7
  int v3; // r5
  int v4; // r0
  char v5; // r12
  int v6; // r9
  bool v7; // zf
  int (__fastcall ***v8)(_DWORD, int *); // r10
  int v9; // r8
  int v10; // r6
  int v11; // r0
  float v12; // s20
  int v13; // r0
  float v14; // s18

  v2 = 0;
  v3 = a1 + 1328;
  while ( 1 )
  {
    v4 = sub_6014B758(v3, dword_60AF5A6C[v2]);
    v6 = v4;
    v7 = v4 == 0;
    if ( v4 )
      v7 = (FIELD_U8(v4, 137) & 8) == 0;
    if ( v7 )
      goto LABEL_25;
    v8 = *(int (__fastcall ****)(_DWORD, int *))(v4 + 144);
    if ( ((unsigned int)&dword_60C8F394 & ~(1618357316 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F394) )
    {
      dword_60C8F390 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C8F394);
    }
    v9 = 0;
    if ( v8 && (**v8)(v8, &dword_60C8F390) == 1 )
      v9 = sub_605CC878((int)v8);
    v10 = FIELD_U32(v6, 144);
    if ( ((unsigned int)&dword_60C7B39C & ~(1618357424 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
    {
      dword_60C7B398 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7B39C);
    }
    if ( v10 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C7B398) == 1 )
      {
        v11 = FIELD_S8(v10, 84);
        if ( (unsigned __int8)v11 != 255 )
        {
          if ( (unsigned __int8)v11 >= 4u )
            v11 = 0;
          v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v11 + 32);
        }
      }
    }
    if ( !v9 )
      goto LABEL_25;
    v12 = FIELD_F32(v9, 88);
    v13 = 0;
    v14 = FIELD_F32(a1, 108) - FIELD_F32(v9, 108);
    if ( (float)(v14 * v12) > 0.0 )
    {
      FIELD_F32(v9, 1300) = FIELD_F32(v9, 1300)
                            - (float)(v12
                                    * *(float *)&aFff333[4
                                                       * (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v9 + 156))(
                                                           v9,
                                                           FIELD_U32(v9, 1320))]);
      FIELD_F32(v9, 1304) = FIELD_F32(v9, 1304) + 0.0;
      FIELD_F32(v9, 1308) = FIELD_F32(v9, 1308) + 0.0;
      v13 = 1;
    }
    if ( (float)(v14 * FIELD_F32(a1, 88)) < 0.0 )
      break;
    if ( v13 )
      return 1;
LABEL_25:
    if ( ++v2 >= 2 )
      return 0;
  }
  sub_60765670(v9);
  return 1;
}
