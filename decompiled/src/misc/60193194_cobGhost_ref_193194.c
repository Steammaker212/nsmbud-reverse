/* cobGhost_ref_193194
 * address: 0x60193194   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobGhost_ref_193194(int a1)
{
  int v2; // r5
  int v3; // r5
  int v4; // r0
  int v5; // r2
  int v6; // r1
  int Resource; // r0
  int v8; // r0
  bool v9; // zf
  int result; // r0
  char v11; // r0
  _DWORD v12[2]; // [sp+4h] [bp-1Ch] BYREF
  int v13; // [sp+Ch] [bp-14h]

  v2 = dword_60C8996C;
  v13 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    v3 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
    FIELD_U8(a1, 272) = 6;
    switch ( v13 )
    {
      case 1:
        FIELD_U8(a1, 272) = 0;
        goto LABEL_6;
      case 2:
        if ( FIELD_U8(a1, 273) )
          goto LABEL_10;
        FIELD_U8(a1, 272) = 0;
LABEL_6:
        v4 = dword_60C8B13C;
        v5 = a1 + 80;
        v6 = 52;
LABEL_9:
        sub_601E4C88(v4, v6, v5, 1);
LABEL_10:
        if ( FIELD_U8(a1, 272) <= 5u )
        {
          v12[0] = &sead__SafeStringBase__vtable;
          v12[1] = "cobGhost";
          Resource = LoadResource(ResourceMgrRelated_instance, v12);
          SkeletalAnim_play(v3, Resource, (int)&dword_60C899E0[2 * FIELD_U8(a1, 272) + 3]);
          AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), dword_60AFBFF4[FIELD_U8(a1, 272)]);
          if ( (unsigned int)(v13 - 1) <= 1 )
            FIELD_U32(v3, 24) = 1075419546;
          FIELD_U8(a1, 272) = 6;
        }
        break;
      case 3:
        FIELD_U8(a1, 272) = 2;
        sub_601E4C88(dword_60C8B13C, 53, a1 + 80, 1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        goto LABEL_10;
      case 4:
        v5 = a1 + 80;
        v6 = 54;
        FIELD_U8(a1, 272) = 1;
        v4 = dword_60C8B13C;
        goto LABEL_9;
      default:
        goto LABEL_10;
    }
  }
  v8 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( v13 == 4 )
  {
    result = FIELD_U8(v8, 28);
    if ( (result & 0x20) == 0 )
      return result;
    v11 = 0;
  }
  else
  {
    v9 = v13 == 2;
    if ( v13 == 2 )
      v9 = FIELD_U8(a1, 273) == 0;
    if ( !v9 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    result = FIELD_U8(v8, 28);
    if ( (result & 0x20) == 0 )
      return result;
    v11 = 1;
  }
  FIELD_U8(a1, 273) = v11;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
