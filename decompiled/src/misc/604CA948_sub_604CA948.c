/* sub_604CA948
 * address: 0x604CA948   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CA948(int a1)
{
  unsigned int v2; // r0
  int *v3; // r5
  StateMethodExecuter *result; // r0
  bool v5; // zf
  int *v6; // r1
  int v7; // r0
  StateMethodExecuter *v8; // [sp+4h] [bp-14h]

  v3 = (int *)(a1 + 615700);
  v2 = FIELD_U32(a1, 615700);
  if ( v2 >= 0xA )
    v2 = 0;
  v8 = *(StateMethodExecuter **)(a1 + 52644 * v2 + 141860);
  result = v8;
  v5 = v8 == (StateMethodExecuter *)3;
  if ( v8 != (StateMethodExecuter *)3 )
    v5 = v8 == (StateMethodExecuter *)5;
  if ( !v5 )
  {
    result = (StateMethodExecuter *)SE_SYS_CURSOR_ref_4D2F44(a1);
    if ( !result )
    {
      if ( sub_60502D80(a1 + 3800) || FIELD_U8(a1, 4846) )
      {
        v6 = &dword_60CA3518;
      }
      else
      {
        v7 = *v3;
        if ( (unsigned int)*v3 >= 0xA )
          v7 = 0;
        if ( !*(_BYTE *)(a1 + 52644 * v7 + 94194) )
        {
          if ( sub_604D3EDC(a1) == 1 )
            return (StateMethodExecuter *)sub_604D1A84(a1);
          else
            return (StateMethodExecuter *)sub_604D3C50(a1);
        }
        v6 = &dword_60CA3218;
      }
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v6);
    }
  }
  return result;
}
