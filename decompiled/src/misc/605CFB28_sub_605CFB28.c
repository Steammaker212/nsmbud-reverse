/* sub_605CFB28
 * address: 0x605CFB28   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CFB28(_BYTE *a1)
{
  int result; // r0
  int v3; // r1

  if ( (a1[6260] & 1) != 0 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)a1 + 18);
    a1[19] = 1;
    if ( a1[7339] )
      ++FIELD_U32(dword_60CAF15C, 33812);
    if ( *((_DWORD *)a1 + 1822) == 1 )
    {
      return sub_605BA078(dword_60CB061C, (int)(a1 + 6980), 2, FIELD_U8(LevelInfo_instance, 18));
    }
    else
    {
      result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 336))(a1);
      v3 = *((_DWORD *)a1 + 1827);
      if ( v3 )
        return sub_6058568C(dword_60CAF15C, v3, *((_DWORD *)a1 + 1829));
    }
  }
  else
  {
    sub_605D0678((int)a1);
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 332))(a1);
  }
  return result;
}
