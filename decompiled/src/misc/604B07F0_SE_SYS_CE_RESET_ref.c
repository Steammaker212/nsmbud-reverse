/* SE_SYS_CE_RESET_ref
 * address: 0x604B07F0   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CE_RESET_ref(int a1)
{
  int v1; // r4
  int v2; // r1
  int v3; // r5
  unsigned int v4; // r0
  int v5; // r0
  StateMethodExecuter *result; // r0
  bool v7; // zf

  v1 = a1;
  v2 = FIELD_U8(a1, 38089);
  LOBYTE(a1) = 1;
  if ( !v2 )
    a1 = FIELD_U8(v1, 38090) | (FIELD_U32(dword_60C99DD4, 1376) >> 3) & 1;
  FIELD_U8(v1, 4653) = a1;
  v3 = dword_60C99DD0;
  v4 = FIELD_U32(dword_60C99DD0, 3796);
  if ( v4 <= 3 )
  {
    v5 = dword_60AF5A10[v4];
    if ( v5 == 1 )
    {
      FIELD_U32(dword_60C99DD0, 3780) |= 1u;
    }
    else if ( !v5 )
    {
      FIELD_U32(dword_60C99DD0, 3780) |= 2u;
      if ( FIELD_U32(v3, 3668) )
      {
        if ( !sub_604B6E00() && FIELD_U32(dword_60C99DD0, 3668) && sub_604B6F58() == 1 )
        {
          switch ( FIELD_U32(v1, 38064) )
          {
            case 5:
              FIELD_U8(dword_60CBC000, 156) = 1;
              FIELD_U8(v1, 38099) = 1;
              break;
            case 0xA:
              FIELD_U8(v1, 38098) = 1;
              break;
            case 0xB:
            case 0xC:
              FIELD_U32(dword_60CC62E4, 108) = 65538;
              sub_603F4860(AreaTask_intance);
              FIELD_U32(dword_60C99DD0, 3780) &= ~2u;
              break;
            default:
              break;
          }
        }
      }
    }
  }
  result = *(StateMethodExecuter **)(v3 + 3668);
  v7 = result == 0;
  if ( result )
  {
    result = (StateMethodExecuter *)BYTE2(result[86].currentState);
    v7 = result == 0;
  }
  if ( v7 )
  {
    result = (StateMethodExecuter *)dword_60C99DD0;
    if ( !FIELD_U8(dword_60C99DD0, 3793) )
    {
      if ( FIELD_U32(dword_60C99DD0, 3668) && sub_604B6F58() == 1 && FIELD_U32(v1, 38064) == 10 )
      {
        FIELD_U32(v1, 38064) = 11;
        FIELD_U32(v3, 3780) |= 1u;
        return StateMgr__changeState((StateMgr *)(v1 + 6112), (StateBase *)&dword_60CA1A14);
      }
      else
      {
        FIELD_U32(v3, 3780) |= 1u;
        if ( FIELD_U8(v1, 38099) )
        {
          sub_60807EF0(SoundSystem_instance, "SE_SYS_CE_RESET", 0, 1);
          FIELD_U8(v1, 38099) = 0;
        }
        sub_60502548(v1 + 3608);
        FIELD_U16(v1, 4660) = 0;
        sub_6047EABC((_DWORD *)(v1 + 3648));
        return StateMgr__changeState((StateMgr *)(v1 + 6112), (StateBase *)&dword_60CA1954);
      }
    }
  }
  return result;
}
