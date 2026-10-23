/* sub_6056C21C
 * address: 0x6056C21C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6056C21C(int a1)
{
  unsigned int result; // r0
  bool v3; // zf
  char v4; // r0

  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U8(result, 6102);
    v3 = result == 0;
  }
  if ( v3 )
  {
    if ( FIELD_U32(a1, 7408) )
      sub_6056DF3C(a1);
    FIELD_U32(a1, 6872) = 0;
    result = FIELD_U8(a1, 7468);
    if ( result == 1 )
    {
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB04EC);
    }
    else
    {
      if ( result != 2 )
        return result;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB04A4);
      FIELD_U32(a1, 6872) = 1;
    }
    result = FIELD_U32(a1, 6856);
    if ( result != 21 )
    {
      sub_605BA078(dword_60CB061C, a1 + 6980, 1, FIELD_U8(LevelInfo_instance, 18));
      v4 = FIELD_U8(a1, 7469);
      FIELD_U8(a1, 6850) = v4;
      FIELD_U8(a1, 84) = v4;
      sub_60564098(a1);
      return sub_605641B4(a1);
    }
  }
  return result;
}
