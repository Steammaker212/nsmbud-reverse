/* CoinEditScene_Attention_ref
 * address: 0x604B5164   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CoinEditScene_Attention_ref(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  int v4; // r3
  int v5; // r0
  bool v6; // zf
  int v7; // r1
  const char *v8; // r0
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_BYTE *)(a1 + 14937);
  result = FIELD_U8(a1, 14937);
  if ( !result )
  {
    sub_60473DE4(*(_DWORD **)(a1 + 4), 4u, &dword_60CA1B74, 0);
    *v3 = 1;
    v5 = FIELD_U8(dword_60CBC000, 148);
    v6 = v5 == 0;
    if ( FIELD_U8(dword_60CBC000, 148) )
      LOBYTE(v5) = 1;
    FIELD_U8(a1, 14938) = v5;
    v7 = FIELD_U32(a1, 596);
    v9[0] = &sead__SafeStringBase__vtable;
    if ( v6 )
      v8 = "CoinEditScene_Attention_00";
    else
      v8 = "CoinEditScene_Attention_01";
    v9[1] = v8;
    return sub_6047E0EC(v9, v7, 0, v4);
  }
  return result;
}
