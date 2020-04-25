#ifndef BASE_H
#define BASE_H

#include <cstdio>

/** @brief This class is befriended
 */
class friendly {};

/** @brief Friend A
 * @note For this to trigger, one has to include the access modifier!
 */
class protective_friend_a {
protected:  // With this "protected" (but public and private equally work), it fails
    friend class friendly;
};

/** @brief Friend A
 * @note This does not trigger.
 */
class private_friend_b {
    friend class friendly;
};


#endif
