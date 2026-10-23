/* sub_604B4FF8
 * address: 0x604B4FF8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B4FF8(int a1)
{
  int v2; // r1
  _BYTE *v3; // r6
  int v4; // r0
  int v5; // r5
  int result; // r0

  v3 = (_BYTE *)(a1 + 14938);
  v2 = FIELD_U8(a1, 14938);
  v4 = dword_60CBC000;
  v5 = FIELD_U32(dword_60CBC000, 100);
  if ( !v2 )
    goto LABEL_17;
  if ( FIELD_S32(dword_60CBC000, 104) <= 2 && FIELD_U8(a1, 14937) )
  {
    sub_604741D8(*(_DWORD **)(a1 + 4), 4u, &dword_60CA1B74, 0);
    FIELD_U8(a1, 14937) = 0;
    v4 = dword_60CBC000;
  }
  if ( !FIELD_U8(v4, 148) && FIELD_U8(a1, 14937) )
  {
    sub_604741D8(*(_DWORD **)(a1 + 4), 4u, &dword_60CA1B74, 0);
    FIELD_U8(a1, 14937) = 0;
  }
  result = (unsigned __int8)*v3;
  if ( !*v3 )
  {
LABEL_17:
    if ( v5 < 300 && FIELD_U8(a1, 14937) )
    {
      sub_604741D8(*(_DWORD **)(a1 + 4), 4u, &dword_60CA1B74, 0);
      FIELD_U8(a1, 14937) = 0;
    }
    result = FIELD_U8(dword_60CBC000, 148);
    if ( result == 1 )
    {
      result = FIELD_U8(a1, 14937);
      if ( FIELD_U8(a1, 14937) )
      {
        result = sub_604741D8(*(_DWORD **)(a1 + 4), 4u, &dword_60CA1B74, 0);
        FIELD_U8(a1, 14937) = 0;
      }
    }
  }
  return result;
}
