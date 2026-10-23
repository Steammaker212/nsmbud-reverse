/* sub_605E118C
 * address: 0x605E118C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E118C(int a1)
{
  int v2; // r8
  int v3; // r7
  int v4; // r5
  int *v5; // r9
  int *v6; // r4
  int v7; // r7
  int v8; // r11
  float v10[2]; // [sp+4h] [bp-34h] BYREF
  float v11; // [sp+Ch] [bp-2Ch]
  int v12; // [sp+10h] [bp-28h]

  v2 = 0;
  if ( (FIELD_U32(a1, 6264) & 0x2200) == 0x200 && !sub_605DBD64(a1) && (FIELD_U8(a1, 6261) & 8) == 0 )
  {
    v3 = dword_60CC6484;
    v10[0] = 3.4028e38;
    v10[1] = 3.4028e38;
    v11 = -3.4028e38;
    v12 = -8388609;
    (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 408))(a1, v10);
    v4 = ActorMgr__instance;
    v5 = *(int **)(ActorMgr__instance + 27180);
    v6 = (int *)sub_60008598(ActorMgr__instance, 748, FIELD_U32(ActorMgr__instance, 27172));
    if ( v6 != v5 )
    {
      v7 = v3 + 40;
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6
          && (((int (__fastcall *)(int, float))loc_6015AB38)(v7, FIELD_F32(v8, 6132))
           || ((int (__fastcall *)(int, float))loc_6015AB38)(v7, FIELD_F32(v8, 6140)) == 1)
          && (((int (__fastcall *)(int, float))loc_6015AB38)(v7, v10[0])
           || ((int (__fastcall *)(int, float))loc_6015AB38)(v7, v11)) )
        {
          break;
        }
        v6 = (int *)sub_60008598(v4, 748, (int)(v6 + 1));
        if ( v6 == v5 )
          return v2;
      }
      return 1;
    }
  }
  return v2;
}
