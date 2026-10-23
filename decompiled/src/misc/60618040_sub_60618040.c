/* sub_60618040
 * address: 0x60618040   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60618040(_BYTE *a1)
{
  _BYTE *v2; // r5
  int result; // r0

  v2 = a1 + 7184;
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 200))(a1);
  result = (unsigned __int8)*v2;
  if ( *v2 )
  {
    if ( (a1[22] & 0x10) != 0 )
    {
      *((_WORD *)a1 + 3548) = 0;
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
      return (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBACA0);
    }
    else
    {
      a1[19] = 1;
      return 1;
    }
  }
  return result;
}
