# TymexIntern
# My Application (Android)

This Android application provides a simple interface for converting between different currencies. It fetches real-time exchange rates using the Exchange Rates API.

**App Structure:**

The project follows a clean architecture approach, with packages organized as follows:

- **di:** Contains classes related to dependency injection using Hilt.
- **helper:** Utility classes for network checks, keyboard management, and UI adjustments.
- **model:** Data classes representing API responses.
- **network:** Classes for handling network requests using Retrofit.
- **view:** Activities and UI components.
- **viewmodel:** ViewModels for managing UI state and data.

**Building and Running:**

1. Clone the repository.
2. Open the project in Android Studio.
3. Build the project and run it on an emulator or physical device.

**Notes and Challenges:**

- **Hilt Integration:** I encountered some issues while setting up Hilt for dependency injection. Further investigation and troubleshooting are needed to resolve these issues.
- **Can't run on iPhone:** This app is built for Android and cannot be run directly on an iPhone.

**Key Features:**

- Splash screen with app logo.
- Simple and user-friendly interface.
- Real-time currency conversion.
- Dropdown lists for selecting currencies.
- Error handling for network issues.

**Additional Notes:**

- The app uses Retrofit for network requests, Gson for JSON parsing, and Coroutines for asynchronous operations.
- The UI is built using Jetpack Compose.
- The app includes basic error handling and input validation.

**Future Improvements:**

- Implement caching to reduce network requests.
- Add support for offline mode.
- Improve error handling and user feedback.
- Expand the range of supported currencies.
