/* sub_60566B48
 * address: 0x60566B48   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60566B48(int a1)
{
  _DWORD *v2; // r5
  signed int v3; // r1
  signed int result; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r3
  __int64 v8; // r0

  FIELD_U32(a1, 7368) = 3;
  v2 = (_DWORD *)(a1 + 7368);
  FIELD_U32(a1, 7296) = 50;
  FIELD_U8(a1, 87) = byte_60B0536C[(FIELD_U32(a1, 20) >> 8) & 1];
  v3 = sub_605635AC(a1, 0, 0);
  result = 2;
  if ( v3 == 1 )
  {
    FIELD_U32(a1, 7300) = *(_DWORD *)((char *)&unk_60AF2188 + ((FIELD_U32(a1, 24) >> 2) & 4));
    FIELD_U32(a1, 7304) = FIELD_U8(a1, 28);
    BlockBase_setupMovement(a1);
    FIELD_U8(a1, 535) = 0;
    FIELD_U32(a1, 500) = 1115684864;
    FIELD_U32(a1, 504) = 1115684864;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 516) = 1140850688;
    FIELD_U32(a1, 520) = 1140850688;
    FIELD_U32(a1, 524) = 1149239296;
    FIELD_U32(a1, 528) = 1149239296;
    FIELD_U32(a1, 7280) = 1115684864;
    FIELD_U32(a1, 7284) = 1115684864;
    if ( FIELD_U32(a1, 7304) )
      FIELD_U32(a1, 7352) = 1096810496;
    if ( *v2 == 2 )
    {
      FIELD_U8(a1, 535) = 1;
      sub_605D0024(a1);
      if ( FIELD_U8(dword_60CC6D8C, 17) )
        v5 = 12;
      else
        v5 = 7;
      ColliderBase_setType((ColliderBase *)(a1 + 6120), v5);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE31C);
      return 1;
    }
    else
    {
      ColliderBase_setType((ColliderBase *)(a1 + 6120), 41);
      FIELD_U32(a1, 6432) = 0;
      FIELD_U32(a1, 6436) = sub_60566DE4;
      FIELD_U32(a1, 6440) = 0;
      sub_605D0024(a1);
      if ( Actor__getProfileId((Actor *)a1) == 295 )
      {
        v6 = FIELD_U8(a1, 539);
        if ( FIELD_U8(a1, 539) )
        {
          v7 = v6 - 33;
          HIDWORD(v8) = 1u >> (33 - v6);
          LODWORD(v8) = 1 << (v6 - 1);
          if ( v7 >= 0 )
          {
            HIDWORD(v8) = 1 << v7;
            LODWORD(v8) = 0;
          }
          if ( (*(_QWORD *)(EventMgr__instance + 16) & v8) == 0 )
          {
            FIELD_U8(a1, 7312) = 0;
            if ( sub_601536B0((int)ColliderMgr_instance, a1 + 6120) )
              ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
          }
        }
      }
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE2F8);
      FIELD_U8(a1, 6851) = 1;
      return 1;
    }
  }
  return result;
}
