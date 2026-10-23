/* BrickBlockHuge__onCreate
 * address: 0x60565CA8   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall BrickBlockHuge__onCreate(int a1)
{
  _DWORD *v2; // r7
  signed int v3; // r1
  signed int result; // r0
  int *v5; // r1

  FIELD_U32(a1, 7368) = 1;
  v2 = (_DWORD *)(a1 + 7368);
  FIELD_U32(a1, 7296) = 48;
  FIELD_U8(a1, 7376) = 1;
  FIELD_U32(a1, 7288) = 1;
  v3 = sub_605635AC(a1, 1, 1);
  result = 2;
  if ( v3 == 1 )
  {
    FIELD_U32(a1, 6968) = -1049624576;
    FIELD_U32(a1, 6972) = 1097859072;
    FIELD_U32(a1, 6976) = -1048576000;
    FIELD_U32(a1, 6776) = -1048576000;
    FIELD_U32(a1, 6780) = 1098907648;
    FIELD_U32(a1, 6784) = 1098907648;
    FIELD_U32(a1, 6788) = -1048576000;
    sub_60165340(a1 + 6120, (_DWORD *)(a1 + 6776), (_DWORD *)(a1 + 6784));
    ColliderBase_setType((ColliderBase *)(a1 + 6120), 10);
    if ( (FIELD_U8(a1, 27) & 1) != 0 )
      FIELD_U32(a1, 6344) = 5;
    if ( FIELD_U32(a1, 6856) == 21 )
    {
      FIELD_U8(a1, 6876) = 1;
    }
    else if ( *v2 == 2 )
    {
      ColliderBase_setType((ColliderBase *)(a1 + 6120), 11);
    }
    sub_60563AB8((ColliderBase *)a1);
    FIELD_U32(a1, 7352) = 0;
    FIELD_U32(a1, 7356) = -1048576000;
    FIELD_U32(a1, 7360) = 1098907648;
    FIELD_U32(a1, 7364) = -1048576000;
    FIELD_U32(a1, 500) = 1149239296;
    FIELD_U32(a1, 504) = 1149239296;
    FIELD_U32(a1, 508) = 1115684864;
    FIELD_U32(a1, 512) = 1115684864;
    FIELD_U32(a1, 516) = 1149239296;
    FIELD_U32(a1, 520) = 1149239296;
    FIELD_U32(a1, 524) = 1157627904;
    FIELD_U32(a1, 528) = 1157627904;
    FIELD_U32(a1, 7280) = 1124073472;
    FIELD_U32(a1, 7284) = 1124073472;
    sub_605D0024(a1);
    if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
    {
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      ShapedCollider_execute((ColliderBase *)(a1 + 6120));
    }
    if ( FIELD_U32(a1, 6856) == 21 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE3A8);
    }
    else
    {
      if ( *v2 == 2 )
        v5 = &dword_60CAE31C;
      else
        v5 = &dword_60CAE2F8;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v5);
    }
    return 1;
  }
  return result;
}
