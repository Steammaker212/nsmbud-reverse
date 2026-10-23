/* SE_SYS_DECIDE_ref
 * address: 0x601B2F78   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DECIDE_ref(int a1)
{
  int result; // r0
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r5
  int v8; // r6
  int v9; // r5

  result = sub_60190968(dword_60C8996C);
  if ( result )
    return result;
  result = sub_602205C8(dword_60C8D4EC);
  if ( result != 1 )
    return result;
  v3 = dword_60C89E18;
  FIELD_U8(dword_60C89E18, 17043) = 0;
  if ( SE_SYS_PAUSE_ref(v3 + 2880, 0) == 1 )
  {
    sub_601863B8(a1, 33, 0);
    v4 = (_DWORD *)sub_601FEE28(dword_60C8C188);
    sub_6016EE88(v4);
    result = FIELD_U8(dword_60CC6D78, 20);
    if ( FIELD_U8(dword_60CC6D78, 20) )
    {
      result = dword_60C9CFB8;
      FIELD_U8(dword_60C9CFB8, 20) = 1;
    }
    return result;
  }
  if ( !sub_604C84E0(dword_60C89E18 + 2880) && sub_601CFD30(dword_60C8AEF0, 0x2000) == 1 )
  {
    sub_604C84E8(dword_60C89E18 + 2880);
    if ( !FIELD_U8(dword_60C89E18, 240460) )
      return sub_601B32F0(a1);
    if ( FIELD_U32(a1, 1032) == 8 )
      sub_601D0DB0(a1);
    else
      sub_601D0D88(a1);
    return sub_60807EF0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1);
  }
  if ( SE_SYS_PAUSE_ref(dword_60C89E18 + 2880, 1) == 1 )
  {
    v5 = a1;
    v6 = 2;
    return sub_601863B8(v5, v6, 0);
  }
  if ( SE_SYS_PAUSE_ref(dword_60C89E18 + 2880, 2) == 1 )
  {
    v5 = a1;
    v6 = 3;
    return sub_601863B8(v5, v6, 0);
  }
  result = sub_604C84E0(dword_60C89E18 + 2880);
  if ( !result )
  {
    result = sub_601D844C(a1);
    if ( result == 1 )
    {
      FIELD_U32(a1, 1096) = 6;
      v7 = sub_601CFDE0(dword_60C8AEF0);
      while ( 2 )
      {
        v8 = sub_601D8424(a1, v7);
        if ( sub_601D7414(a1, v8) == 1 )
        {
          FIELD_U32(a1, 1148) = v8;
          v9 = (*((int (**)(void))stru_60C8A908.vtable + 2))();
          if ( v9 != (*(int (**)(void))(dword_60C8A950 + 8))() )
            FIELD_U16(a1, 440) &= ~4u;
          return (int)StateMgr__changeState((StateMgr *)(a1 + 904), &stru_60C8A908);
        }
        else
        {
          switch ( v8 )
          {
            case 2:
              v7 &= ~0x20u;
              if ( v7 )
                continue;
              goto LABEL_29;
            case 3:
              v7 &= ~0x10u;
              if ( v7 )
                continue;
              goto LABEL_29;
            case 4:
              v7 &= ~0x40u;
              if ( v7 )
                continue;
              goto LABEL_29;
            case 5:
              v7 &= ~0x80u;
              goto LABEL_28;
            default:
LABEL_28:
              if ( v7 )
                continue;
LABEL_29:
              FIELD_U32(a1, 1100) = v8;
              result = sub_601E1308(v8);
              FIELD_U32(a1, 180) = result;
              FIELD_U32(a1, 1000) = result;
              break;
          }
        }
        break;
      }
    }
  }
  return result;
}
