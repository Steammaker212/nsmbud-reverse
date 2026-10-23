/* sub_6076370C
 * address: 0x6076370C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6076370C(int a1)
{
  int v2; // r0
  bool v3; // zf
  unsigned int result; // r0

  v2 = FIELD_U32(a1, 1204);
  v3 = (v2 & 0x4000) == 0;
  FIELD_U32(a1, 1204) = v2 & 0xFFFFFE7F;
  result = FIELD_U32(a1, 1236) & 0xFFFFFBFF;
  FIELD_U32(a1, 1236) = result;
  if ( v3 )
  {
    result = FIELD_U8(a1, 1219);
    if ( (result & 8) == 0 )
    {
      result = sub_60777B9C(dword_60CBFA90);
      if ( !result )
      {
        if ( (FIELD_U8(a1, 1235) & 0x20) == 0 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
          sub_607637D4(a1);
          if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1)
            && !sub_60002110(a1, a1 + 1328)
            && !sub_60763F08(a1) )
          {
            sub_6076402C(a1);
          }
          sub_6076357C(a1);
        }
        JUMPOUT(0x60763AD0);
      }
    }
  }
  return result;
}
