/* sub_605635AC
 * address: 0x605635AC   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605635AC(int a1, int a2, int a3)
{
  int v4; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r1
  signed int result; // r0
  _DWORD *v12; // r1
  int v13; // r0

  v4 = 1140457472;
  FIELD_U32(a1, 116) = 1140457472;
  if ( FIELD_U8(a1, 86) || (FIELD_U8(a1, 87) & 2) != 0 )
  {
    v4 = -985956352;
    FIELD_U32(a1, 116) = -985956352;
  }
  FIELD_U32(a1, 7348) = v4;
  FIELD_U32(a1, 6980) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6984) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6988) = v4;
  if ( FIELD_U8(dword_60C9A1F0, 6515) )
  {
    v7 = dword_60CB061C;
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 360))(a1);
    v9 = sub_605B9F30(v7, dword_60B04164[v8]);
  }
  else
  {
    v9 = dword_60B04164[(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 360))(a1)];
  }
  FIELD_U32(a1, 6856) = v9;
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
  result = 0;
  if ( v10 == 1 )
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    sub_605B2C10(a1);
    FIELD_U8(a1, 6847) = 1;
    sub_605D02D0(a1);
    sub_605B5274(a1);
    FIELD_U32(a1, 6776) = -1056964608;
    FIELD_U32(a1, 6780) = 1098907648;
    FIELD_U32(a1, 6784) = 1090519040;
    FIELD_U32(a1, 6788) = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CAE34C);
    v12 = (_DWORD *)(a1 + 6432);
    v13 = FIELD_U32(a1, 7368);
    if ( (v13 & 0xFFFFFFFE) == 2 )
    {
      *v12 = sub_605B3700;
      FIELD_U32(a1, 6436) = sub_605B4010;
      FIELD_U32(a1, 6440) = sub_605B4A6C;
      if ( v13 == 2 )
      {
        ColliderBase_setType((ColliderBase *)(a1 + 6120), 12);
        FIELD_U32(a1, 6256) |= 0x18u;
        if ( a3 != 1 )
          goto LABEL_16;
      }
      else
      {
        FIELD_U32(a1, 6456) = a1 + 7344;
        if ( a3 != 1 )
        {
LABEL_16:
          if ( a2 == 1 )
            ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
          FIELD_U32(a1, 80) = 0;
          return 1;
        }
      }
    }
    else
    {
      *v12 = sub_605B348C;
      FIELD_U32(a1, 6436) = sub_605B3934;
      FIELD_U32(a1, 6440) = sub_605B4110;
      FIELD_U32(a1, 6256) |= 0x18u;
      FIELD_U32(a1, 6456) = a1 + 7344;
      if ( a3 != 1 )
        goto LABEL_16;
    }
    FIELD_U32(a1, 6452) = sub_60563890;
    goto LABEL_16;
  }
  return result;
}
