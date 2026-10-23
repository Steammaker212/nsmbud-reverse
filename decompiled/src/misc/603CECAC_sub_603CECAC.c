/* sub_603CECAC
 * address: 0x603CECAC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CECAC(int a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  int result; // r0
  int v5; // r1
  bool v6; // zf
  _WORD *v7; // r5
  int v8; // r1
  int v9; // r5

  v3 = (_DWORD *)PlayerMgr_instance;
  if ( FIELD_U32(PlayerMgr_instance, 48) )
  {
    if ( sub_603CEF60(a1) )
      goto LABEL_12;
    v3 = (_DWORD *)PlayerMgr_instance;
  }
  if ( v3[13] )
  {
    if ( sub_603CEF60(a1) )
      goto LABEL_12;
    v3 = (_DWORD *)PlayerMgr_instance;
  }
  if ( v3[14] )
  {
    if ( sub_603CEF60(a1) )
      goto LABEL_12;
    v3 = (_DWORD *)PlayerMgr_instance;
  }
  if ( v3[15] && sub_603CEF60(a1) )
  {
LABEL_12:
    result = FIELD_U16(a1, 6102);
    if ( !FIELD_U16(a1, 6102) )
    {
      v5 = FIELD_U32(a1, 44);
      result = FIELD_U32(a1, 36) - v5;
      v6 = FIELD_U32(a1, 36) == v5;
      if ( result )
        v6 = result == a1 + 32 - v5;
      if ( v6 )
      {
        v7 = (_WORD *)(a1 + 6100);
        if ( FIELD_U16(a1, 6100) )
        {
          result = FIELD_U16(a1, 6100) - 1;
          *v7 = result;
        }
        else
        {
          sub_603CF0CC(a1);
          if ( (unsigned __int8)(FIELD_U32(a1, 24) >> 4) )
            result = 30 * (unsigned __int8)(FIELD_U32(a1, 24) >> 4) + 120;
          else
            result = 128;
          *v7 = result;
        }
      }
    }
    return result;
  }
  v8 = FIELD_U32(a1, 36);
  result = FIELD_U32(a1, 44);
  v9 = v8 - result;
  if ( v8 != result )
  {
    result = a1 + 32 - result;
    if ( v9 != result )
    {
      FIELD_U16(a1, 6100) = 0;
      if ( ((unsigned int)&dword_60C92F04 & ~(1614605832 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
      {
        dword_60C92F00 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C92F04);
      }
      result = (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C92F00);
      if ( result == 1 )
      {
        FIELD_U8(v9, 6604) = 1;
        return 6604;
      }
    }
  }
  return result;
}
