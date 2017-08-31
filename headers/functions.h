#include <libnotify/notify.h>
#include <string>

int startNotification()
{
    notify_init("Starting Assistant");
    NotifyNotification* n = notify_notification_new ("Hii Pushkar!",
                                 "I am ready to assist you.",
                                  "user-available");
    notify_notification_set_timeout(n, 10000); // 10 seconds

    if (!notify_notification_show(n, 0))
    {
        std::cerr << "show has failed" << std::endl;
        return -1;
    }
    return 1;
}
