/* sub_608EEB20
 * address: 0x608EEB20   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EEB20(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C5C664;
  a1[130] = off_60BFA048;
  v2 = a1 + 130;
  sead__MethodTreeNode__detachAll(a1 + 130);
  sead__IDisposer__dtor(v2);
  a1[110] = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 110);
  sead__IDisposer__dtor(a1 + 110);
  a1[90] = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 90);
  sead__IDisposer__dtor(a1 + 90);
  a1[70] = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 70);
  sead__IDisposer__dtor(a1 + 70);
  a1[50] = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 50);
  sead__IDisposer__dtor(a1 + 50);
  a1[30] = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 30);
  sead__IDisposer__dtor(a1 + 30);
  a1[10] = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 10);
  sead__IDisposer__dtor(a1 + 10);
  return sub_609120C8(a1);
}
